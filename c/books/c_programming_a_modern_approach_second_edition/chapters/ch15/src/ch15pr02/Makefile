# Compiler
#CC = clang

# Compiler flags:
# 	-std=c11 : Use c11 (latest standard)
#	-g : Add debugging info to binary
#	-Weverything : EVERY warning
#	-Wpedantic : Issue warnings about straying from ISO C

justify: justify.o word.o line.o
	clang -o justify justify.o word.o line.o

justify.o: justify.c word.h line.h
	clang -std=c11 -g -Weverything -Wpedantic -c justify.c

word.o: word.c word.h
	clang -std=c11 -g -Weverything -Wpedantic -c word.c

line.o: line.c line.h
	clang -std=c11 -g -Weverything -Wpedantic -c line.c

clean:
	rm *.o; rm justify	
