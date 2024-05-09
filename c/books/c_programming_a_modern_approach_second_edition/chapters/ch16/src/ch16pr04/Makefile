# Compiler
#CC = clang

# Compiler flags:
# 	-std=c11 : Use c11 (latest standard)
#	-g : Add debugging info to binary
#	-Weverything : EVERY warning
#	-Wpedantic : Issue warnings about straying from ISO C

inventory: inventory.o readline.o
	clang -o inventory inventory.o readline.o

inventory.o: inventory.c readline.h
	clang -std=c11 -g -Weverything -Wpedantic -c inventory.c

word.o: readline.c readline.h
	clang -std=c11 -g -Weverything -Wpedantic -c readline.c

clean:
	rm *.o; rm inventory	
