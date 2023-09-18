GEN_DIR=gen
DOC_DIR=doc
XML=nasdaq_ouch.xml
SCRIPT=ouch_msg_to_c.py
RELEASE=release
INC=inc

FLAGS = -std=gnu99 -Wall -Wextra -Wconversion -Wshadow -Wundef -fno-common  -Wno-unused-parameter -Wno-type-limits -fpic
CC = cc $(if $(debug),-DDEBUG -g)
LD = cc

test : test.o type.o ouch_s.o
	$(LD) -o test -g test.o

test.o : test.c
	$(CC) -c test.c $(FLAGS)

type.o : type.c type.h
	$(CC) -c type.c $(FLAGS)

gen_flag : ${DOC_DIR}/${XML} ${GEN_DIR}/${SCRIPT}
	cd ${GEN_DIR} ; python ${SCRIPT} ../$(DOC_DIR)/${XML}
	touch gen_flag

ouch_s.o: ouch_s.h ouch_s.c
	$(CC) -c ouch_s.c $(FLAGS)

lib: itch.o file.o
	ar rcs libitch.a itch.o file.o 

release: lib
	mkdir -p $(RELEASE)/$(INC)/$(GEN_DIR)
	cp libitch.a $(RELEASE)/.
	cp *.h $(RELEASE)/$(INC)
	cp $(GEN_DIR)/*.h $(RELEASE)/$(INC)/$(GEN_DIR)

clean:
	rm gen_flag
	rm -f ${GEN_DIR}/*.h
	rm -f *.o	
	rm -f *.a	
	rm -f test
	rm -fr $(RELEASE)
