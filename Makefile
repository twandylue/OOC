CFLAGS=-Wall -Wextra -std=c11 -pedantic -ggdb
STYLE=llvm # google, llvm, chromium, mozilla, webkit

OOPC: main.c
	clang-format --style=$(STYLE) -i *.c
	clang-format --style=$(STYLE) -i *.h
	cc $(CFLAGS) main.c encapsulation.c inheritance.c -o OOPC && ./OOPC

# encapsulation: encapsulation.c
# 	clang-format --style=$(STYLE) -i encapsulation.c
# 	clang-format --style=$(STYLE) -i point.h
# 	cc $(CFLAGS) encapsulation.c -o encapsulation

# inheritance: inheritance.c
# 	clang-format --style=$(STYLE) -i inheritance.c
# 	clang-format --style=$(STYLE) -i labeledPoint.h
# 	cc $(CFLAGS) encapsulation.c inheritance.c -o inheritance
