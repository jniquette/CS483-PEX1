#CS483 PEX1 makefile
#C2C Justin Niquette
#20 Jan 2015

all: list

list:
	gcc list.c listtest.c -o niqlist

run: list
	./niqlist

clean:
	rm -rf *.o niqlist
