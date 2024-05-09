# Compiler
#CC = clang

# Compiler flags:
# 	-std=c11 : Use c11 (latest standard)
#	-g : Add debugging info to binary
#	-Weverything : EVERY warning
#	-Wpedantic : Issue warnings about straying from ISO C

rpn_calc: rpn_calc.o stack.o
	clang -o rpn_calc rpn_calc.o stack.o

rpn_calc.o: rpn_calc.c stack.h
	clang -std=c11 -g -Weverything -Wpedantic -c rpn_calc.c

stack.o: stack.c stack.h
	clang -std=c11 -g -Weverything -Wpedantic -c stack.c

clean:
	rm *.o; rm rpn_calc	
