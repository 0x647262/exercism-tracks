# Compiler
CC = clang

# Compiler flags:
# 	-std=c11 : Use c11 (latest standard)
#	-g : Add debugging info to binary
#	-Weverything : EVERY warning
#	-Wpedantic : Issue warnings about straying from ISO C
CFLAGS = -std=c11 -g -Weverything -Wpedantic

SRC = $(wildcard *.c)
BIN = $(patsubst %.c,%,$(SRC))

all: $(BIN)
	cd ch16ex01; scan-build inventory
	cd ch16pr02; scan-build inventory
	cd ch16pr03; scan-build inventory
	cd ch16pr04; scan-build inventory

clean:
	$(RM) $(BIN)
	cd ch16ex01; make clean
	cd ch16pr02; make clean
	cd ch16pr03; make clean
	cd ch16pr04; make clean
