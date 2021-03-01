
WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c99 -g $(WARNING) $(ERROR) 
VAL = valgrind --tool=memcheck --log-file=vallog --leak-check=full --verbose

SRCS = pa2.c huffman.c
OBJS = $(SRCS:%.c=%.o)

pa2: $(OBJS)
	$(GCC) $(OBJS) -o pa2

testall: test1 test2 

test1: pa2
	./pa2 encoded/gophers mytest/argv2 mytest/argv3 mytest/argv4 mytest/argv5 mytest/argv6 
	diff -w output1 expected/expected1

test2: pa2
	./pa2 encoded\gophers_huff.hbt inputs/test2post > output2
	diff -w output2 expected/expected2

memory: pa2
	$(VAL) ./pa2 inputs/test6in inputs/test6post 

clean: # remove all machine generated files
	rm -f pa2 *.o output? vallog testgen
