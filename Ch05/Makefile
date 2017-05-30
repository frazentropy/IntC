GCC = gcc
CFLAGS = -g -Wall -Wshadow

prog: aredistinct.o main.o
	$(GCC) $(CFLAGS) aredistinct.o main.o -o prog

aredistinct.o: aredistinct.c
	$(GCC) $(CFLAGS) -c aredistinct.c

main.o: main.c
	$(GCC) $(CFLAGS) -c main.c

testall: test_empty test_alluniq test_notuniq

test_empty: prog
	./prog inputs/empty.txt > outputs/empty.txt
	diff expected/empty.txt outputs/empty.txt

test_alluniq: prog
	./prog inputs/alluniq.txt > outputs/alluniq.txt
	diff expected/alluniq.txt outputs/alluniq.txt

test_notuniq: prog
	./prog inputs/notuniq.txt > outputs/notuniq.txt
	diff expected/notuniq.txt outputs/notuniq.txt

clean:
	/bin/rm -f *.o prog outputs/*
