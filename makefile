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
	$(LD) -o test -g $^

test.o : gen_flag test.c
	$(CC) -c test.c $(FLAGS)

gen_flag : ${DOC_DIR}/${XML} ${GEN_DIR}/${SCRIPT}
	cd ${GEN_DIR} ; python ${SCRIPT} ../$(DOC_DIR)/${XML}
	touch gen_flag

type.o : gen_flag type.c type.h
	$(CC) -c type.c $(FLAGS)

ouch_s.o: gen_flag ouch_s.h ouch_s.c
	$(CC) -c ouch_s.c $(FLAGS)

lib: ouch_s.o type.o
	ar rcs libouch.a ouch_s.o type.o 

release: lib
	mkdir -p $(RELEASE)/$(INC)/$(GEN_DIR)
	cp libouch.a $(RELEASE)/.
	cp *.h $(RELEASE)/$(INC)
	cp $(GEN_DIR)/*.h $(RELEASE)/$(INC)/$(GEN_DIR)

clean:
	-rm gen_flag
	-rm -f ${GEN_DIR}/*.h
	-rm -f ${GEN_DIR}/*.c
	-rm -f *.o	
	-rm -f *.a	
	-rm -f test
	-rm -fr $(RELEASE)
