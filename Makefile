CFLAGS=-Wall -Wextra -std=c11 -pedantic -ggdb
STYLE=llvm # google, llvm, chromium, mozilla, webkit

OOPC: main.c encapsulation inheritance
	cc $(CFLAGS) main.c encapsulation.o inheritance.o -o OOPC && ./OOPC

encapsulation: point.h encapsulation.c
	cc $(CFLAGS) -c encapsulation.c -o encapsulation.o

inheritance: labeledPoint.h inheritance.c
	cc $(CFLAGS) -c inheritance.c -o inheritance.o

format:
	clang-format --style=$(STYLE) -i *.c
	clang-format --style=$(STYLE) -i *.h
