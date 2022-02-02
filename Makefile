#bib and main.c makefile

all: lib.o main.c
	gcc -Wall -g -o executable main.c lib.o -lm

lib.o: lib.c lib.h
	gcc -Wall -c lib.c -lm
