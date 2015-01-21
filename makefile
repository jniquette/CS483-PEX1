#CS483 PEX1 makefile
#C2C Justin Niquette
#20 Jan 2015

list: list.o listtest.o makefile
	gcc list.o listtest.o -o listtest

list.o: list.c list.h makefile
	gcc -c list.c

listtest.o: listtest.c list.h makefile
	gcc -c listtest.c

clean:
	rm -rf *.o listtest *~
