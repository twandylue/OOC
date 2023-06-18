CFLAGS=-Wall -Wextra -std=c11 -pedantic -ggdb
STYLE=llvm # google, llvm, chromium, mozilla, webkit

OOPC: *.c
	clang-format --style=$(STYLE) -i *.c
	clang-format --style=$(STYLE) -i *.h

encapsulation: encapsulation.c
	cc $(CFLAGS) encapsulation.c -o Encapsulation && ./Encapsulation

inheritance: inheritance.c
	cc $(CFLAGS) inheritance.c -o Inheritance && ./Inheritance
