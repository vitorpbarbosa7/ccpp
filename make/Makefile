CC = gcc                # Compiler
CFLAGS = -Wall -g       # Flags for warnings and debugging

# Target binary
all: main

# How to build main
main: main.o math_utils.o
	$(CC) -o main main.o math_utils.o

# Compile C files into object files
main.o: main.c math_utils.h
	$(CC) $(CFLAGS) -c main.c

math_utils.o: math_utils.c math_utils.h
	$(CC) $(CFLAGS) -c math_utils.c

# Clean compiled files
clean:
	rm -f *.o main

