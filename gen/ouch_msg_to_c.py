import xmltodict
import pprint
import sys
import math
import re


# output files
ENUM_H="ouch_enum.h"
STRUCT_H="ouch_struct.h"

SIG_PREFIX = "ouch_"

# Generate enums
def parse_enum(enums, enum_f):
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
        enum_f.write("\n} "+e_name+";\n\n")

# Generate structures
def parse_struct(structs, struct_f):
    for s in structs:
        s_name = s['@name']
        s_f = s['Field']
        print("\n\n\n")
        print(s_name," ",len(s_f)," ", type(s_f))
        # check type, exclude dictionary
        if isinstance(s_f, list):
            struct_f.write("typedef struct{\n")
            # start at 1 to bypass message type
            for i in range(1,len(s_f)):
                n = s_f[i]['@name']
                print(n)
                t = s_f[i]['@type']
                struct_f.write("\t"+t+" "+n+";\n")
            struct_f.write("} __attribute__((__packed__)) "+s_name+";\n\n")

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
   
    # Parse XML
    content = xmltodict.parse(my_xml)
   
    # Generate enums 
    parse_enum(content['Model']['Enums']['Enum'], enum_f)
    parse_struct(content['Model']['Structs']['Struct'], struct_f)
    print("C code generated")

main()
