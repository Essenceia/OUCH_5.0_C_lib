import xmltodict
import pprint
import sys
import math
import re


# output files
ENUM_H="ouch_enum.h"

SIG_PREFIX = "ouch_"

def parse_enum(enums, enum_f):
    for enum in enums:
        e_name = enum['@name']
        e_type = enum['@type']
        enum_f.write("typedef "+e_type+" enum {\n")
        e_v = enum['Value']
        for i in range(len(e_v)):
            n = e_v[i]['@name']
            v = e_v[i]['@value']
            if not(i == 0):
                enum_f.write(",\n")
            enum_f.write('\t'+n+" = '"+v+"'")
        enum_f.write("\n} "+e_name+";\n\n")

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
   
    # Parse XML
    content = xmltodict.parse(my_xml)
   
    # Generate enums 
    parse_enum(content['Model']['Enums']['Enum'], enum_f)
    print("C code generated")

main()
