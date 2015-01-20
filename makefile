#CS483 PEX1 makefile
#C2C Justin Niquette
#20 Jan 2015

all: list

list:
	gcc list.c listtest.c -o listtest

run: list
	./listtest

clean:
	rm -rf *.o listtest
