import xmltodict
import pprint
import sys
import math
import re


# output files
ENUM_H="ouch_enum.h"
STRUCT_H="ouch_struct.h"
UNION_H="ouch_union.h"

IN_STRUCT_ELEM_H = "ouch_in_struct_elem.h"
OUT_STRUCT_ELEM_H = "ouch_out_struct_elem.h"

# Print functions
ENUM_PRINT_C_F = "ouch_enum_print.c"
ENUM_PRINT_H_F = "ouch_enum_print.h"

UNION_PRINT_C_F = "ouch_union_print.c"
UNION_PRINT_H_F = "ouch_union_print.h"

STRUCT_PRINT_C_F = "ouch_struct_print.c"
STRUCT_PRINT_H_F = "ouch_struct_print.h"
    
# Read functions
STRUCT_IN_READ_H_F = "ouch_struct_in_read.h"
STRUCT_IN_READ_C_F = "ouch_struct_in_read.c"
STRUCT_OUT_READ_H_F = "ouch_struct_out_read.h"
STRUCT_OUT_READ_C_F = "ouch_struct_out_read.c"



SIG_PREFIX = "ouch_"

# Generators 

# Generate enums
def parse_enum(enums, enum_f, pc_f, ph_f):
    for enum in enums:
        e_name = enum['@name']
        e_type = enum['@type']
        enum_f.write("typedef enum {\n")
        e_v = enum['Value']
        for i in range(len(e_v)):
            n = e_v[i]['@name']
            v = e_v[i]['@value']
            if not(i == 0):
                enum_f.write(",\n")
            enum_f.write('\t'+n+" = ")
            if (e_type == "char_t"):
                enum_f.write("'"+v+"'")
            else:
                enum_f.write(v)
        print_enums(e_v, e_name, pc_f, ph_f)
        enum_f.write("\n} "+e_name+";\n\n")
 
# Print enums 
def print_enums(enum, e_n, c_f, h_f):
    # setup print function prototype
    p = "void print_"+e_n+"("+e_n+" e)"
    h_f.write(p+";\n")
    c_f.write(p+"\n{")
    c_f.write('\tprintf("'+e_n+' : ");\n')
    c_f.write("\tswitch(e)\n\t{\n")
    for val in enum: 
        n = val['@name']
        v = val['@value']
        c_f.write("\tcase "+n+":\n\t\t")
        c_f.write('printf("'+n+'");\n\t\tbreak;\n')
    c_f.write("\tdefault :\n\t\t")
    c_f.write('printf("ERROR, Unmatch value");\n\t\tassert(0);\n')
    c_f.write('\t}\n\tprintf("\\n");\n}\n')
        
# Generate unions
def parse_union(unions, union_f, pc_f, ph_f):
    for union in unions:
        u_name = union['@name']
        union_f.write("typedef union {\n")
        u_m = union['Member']
        for i in range(len(u_m)):
            n = u_m[i]['@name']
            t = u_m[i]['@type']
            union_f.write('\t'+t+" "+n+";\n")
        union_f.write("} "+u_name+";\n\n")
        print_union(u_m, u_name, pc_f, ph_f)

def print_union(union, u_n, c_f, h_f):
    # setup print function prototype, needs lenght,
    # option tag and union
    p = "void print_"+u_n+"(const u8_t l, const char_t t, const "+u_n+" u)"
    h_f.write(p+";\n")
    c_f.write(p+"\n{")
    c_f.write('\n\tprintf("'+u_n+' : ");\n')
    # check if length is > 0 ( we have option )
    c_f.write('\tif(l==0){\n\t\tprintf("none\\n");\n\t}else{\n')
    # switch on tag
    c_f.write("\t\tswitch(t)\n\t\t{\n")
    for m in union: 
        n = m['@name']
        tag = m['@tag']
        t = m['@type']
        c_f.write("\t\tcase "+tag+":\n\t\t\t")
        c_f.write('print_'+t+'(u.'+n+');\n\t\t\tbreak;\n')
    c_f.write("\t\tdefault :\n\t\t\t")
    c_f.write('printf("ERROR, Unknown tag %u",t);\n\t\t\tassert(0);\n')
    c_f.write('\t\t}\n\t}\n\tprintf("\\n");\n}\n')
 
# Generate structures
def parse_struct(structs, struct_f, in_elem_f, out_elem_f, pc_f, ph_f):
    for s in structs:
        s_name = s['@name']
        s_f = s['Field']
        # check type, exclude dictionary
        if isinstance(s_f, list):
            struct_f.write("typedef struct{\n")
            # start at 1 to bypass message type
            for i in range(1,len(s_f)):
                n = s_f[i]['@name']
                t = s_f[i]['@type']
                struct_f.write("\t"+t+" "+n+";\n")
            struct_f.write("} __attribute__((__packed__)) "+s_name+"_s ;\n\n")
            # add instance in correct ouch struct elem
            inbnd = s['@inbound']
            match inbnd:
                case "true":
                    elem_f = in_elem_f;
                case "false":
                    elem_f = out_elem_f;
            elem_f.write("\t"+s_name+"_s "+s_name+";\n")
            print_struct(s_f, s_name,pc_f,ph_f)


# Print struct
def print_struct(struct, name, c_f, h_f):
    #setup print function prototype
    p = "void print_"+name+"(const "+name+"_s* e)"
    h_f.write(p+";\n")
    c_f.write(p+"\n{")
    c_f.write('\tprintf("'+name+' {\\n\\n");\n')
    for i in range(1,len(struct)):
        val = struct[i]
        n = val['@name']
        t = val['@type']
        if not(n=="optional_appendage"):
            c_f.write('\tprintf("'+n+' : ");\n')
            c_f.write("\tprint_"+t+'(e->'+n+");\n")
        else:
            print_struct_option(t,n, struct[i-2], struct[i-1], c_f)
    c_f.write('\tprintf("}\\n");\n}\n')

# Read byte buffer into struct
def read_struct(structs,inbound, rc_f, rh_f):
    x = "ouch_"
    if (inbound == "true"):
        x += "in"
    else:
        x += "out"
    x += "_s"

    # function prototype
    p = x+"* read_"+x+"(uint8_t* buff, size_t len)"
    rh_f.write(p+";")
    rc_f.write(p+"\n{\n")
    # assert buff is not null
    rc_f.write("\tassert(buff);\n")
    # check buffer length and read first byte
    rc_f.write("\tif(len==0){\n\t\treturn NULL;\n\t}else{\n")
    # alloc struct
    rc_f.write("\t\t"+x+"*s = malloc(sizeof("+x+"));\n")
    # get message type char
    rc_f.write("\t\ts->message_type = buff[0];\n")
    # begin switch
    rc_f.write("\t\tswitch(s->message_type){\n")
    for s in structs:
        s_name = s['@name']
        s_f = s['Field']
        inbnd = s['@inbound']
        s_id = s['@id']
        if( inbnd == inbound ):
           rc_f.write("\t\t\tcase '"+s_id+"':\n") 
           # check type, exclude dictionary
           if isinstance(s_f, list):
               rc_f.write("\t\t\t\tmemcpy(&(s->"+s_name+"),buff+1,sizeof(s->"+s_name+"));\n") 
           rc_f.write("\t\t\t\tbreak;\n")
    # add default
    rc_f.write("\t\t\tdefault:\n\t\t\t\t")
    rc_f.write('printf("ERROR: Unknown message type %c\\n",s->message_type);\n')
    rc_f.write("\t\t\t\tassert(0);\n")
    rc_f.write("\t\t\t\tbreak;\n")
    # end switch
    rc_f.write("\t\t\t}\n")
    rc_f.write("\t\treturn s;\n")
    rc_f.write("\t}\n}\n")
 
# Print option in struct: needs option lenght and option tag 
def print_struct_option(u_t, u_n, l, t, c_f):
    l_n = l['@name']
    t_n = t['@name']
    c_f.write("\tprint_"+u_t+'(e->'+l_n+', e->'+t_n+',e->'+u_n+");\n")

def main():
    # Parse args, give path to xml
    assert(len(sys.argv) == 2);
    path = sys.argv[1]
    assert(type(path) is str)
    
    # Open XML file.
    with open(path, 'r', encoding='utf-8') as file:
        my_xml = file.read()
    
    # Open or create output files
    enum_f = open(ENUM_H,"w")
    struct_f = open(STRUCT_H,"w")
    union_f = open(UNION_H,"w")

    enum_c_f = open(ENUM_PRINT_C_F,"w")
    enum_h_f = open(ENUM_PRINT_H_F,"w")

    union_c_f = open(UNION_PRINT_C_F,"w")
    union_h_f = open(UNION_PRINT_H_F,"w")

    struct_c_f = open(STRUCT_PRINT_C_F,"w")
    struct_h_f = open(STRUCT_PRINT_H_F,"w")


    in_elem_f = open(IN_STRUCT_ELEM_H,"w")
    out_elem_f = open(OUT_STRUCT_ELEM_H,"w")
     
    # Parse XML
    content = xmltodict.parse(my_xml)
   
    # Generate enums 
    parse_enum(content['Model']['Enums']['Enum'], enum_f, enum_c_f, enum_h_f)
    parse_union(content['Model']['Unions']['Union'], union_f, union_c_f, union_h_f)
    parse_struct(content['Model']['Structs']['Struct'], struct_f, in_elem_f, out_elem_f, struct_c_f, struct_h_f)
    
    # read and write functions
    in_read_h_f = open(STRUCT_IN_READ_H_F,"w")
    in_read_c_f = open(STRUCT_IN_READ_C_F,"w")
    read_struct(content['Model']['Structs']['Struct'],"true",in_read_c_f, in_read_h_f)
 
    out_read_h_f = open(STRUCT_OUT_READ_H_F,"w")
    out_read_c_f = open(STRUCT_OUT_READ_C_F,"w")
    read_struct(content['Model']['Structs']['Struct'],"false",out_read_c_f, out_read_h_f)
     
    
    print("C code generated")

main()
