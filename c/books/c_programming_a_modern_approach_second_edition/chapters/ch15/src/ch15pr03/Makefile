# Compiler
#CC = clang

# Compiler flags:
# 	-std=c11 : Use c11 (latest standard)
#	-g : Add debugging info to binary
#	-Weverything : EVERY warning
#	-Wpedantic : Issue warnings about straying from ISO C

qsort: qsort.o quicksort.o
	clang -o qsort qsort.o quicksort.o

qsort.o: qsort.c quicksort.h
	clang -std=c11 -g -Weverything -Wpedantic -c qsort.c

quicksort.o: quicksort.c quicksort.h
	clang -std=c11 -g -Weverything -Wpedantic -c quicksort.c

clean:
	rm *.o; rm qsort	
