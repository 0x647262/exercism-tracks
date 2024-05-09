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

clean:
	$(RM) $(BIN)
