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
    c_f.write('printf("ERROR: Unmatch value");\n\t\tassert(0);\n')
    c_f.write('\t}\n\tprintf("\\n");\n}\n')
        
# Generate unions
def parse_union(unions, union_f):
    for union in unions:
        u_name = union['@name']
        union_f.write("typedef union {\n")
        u_m = union['Member']
        for i in range(len(u_m)):
            n = u_m[i]['@name']
            t = u_m[i]['@type']
            union_f.write('\t'+t+" "+n+";\n")
        union_f.write("} "+u_name+";\n\n")


# Generate structures
def parse_struct(structs, struct_f, in_elem_f, out_elem_f):
    for s in structs:
        s_name = s['@name']
        s_f = s['Field']
        # check type, exclude dictionary
        if isinstance(s_f, list):
            print(s_name)
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

# Print
# Print unions
 
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

    in_elem_f = open(IN_STRUCT_ELEM_H,"w")
    out_elem_f = open(OUT_STRUCT_ELEM_H,"w")
     
    # Parse XML
    content = xmltodict.parse(my_xml)
   
    # Generate enums 
    parse_enum(content['Model']['Enums']['Enum'], enum_f, enum_c_f, enum_h_f)
    parse_union(content['Model']['Unions']['Union'], union_f)
    parse_struct(content['Model']['Structs']['Struct'], struct_f, in_elem_f, out_elem_f)
    print("C code generated")

main()
