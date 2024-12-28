.PHONY: all clean format
CFLAGS = -Wall -Werror -O3

all:test_reverse

clean:
	rm -f test_reverse test_reverse.o reverse.o
format:
	clang-format -style=Google -i reverse.c reverse.h test_reverse.c

%.o: %.c
	gcc $(CFLAGS) -c $^ -o $@

test_reverse: test_reverse.o reverse.o
	gcc $(CFLAGS) $^ -o $@