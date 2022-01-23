all: build

build:
	gcc -o test -Werror -Wall test.c

run-stdout: test
	./test < input

run-file: test
	./test < input > output 2>&1 
clean:
	rm -f test output
