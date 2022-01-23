# The expected output 

The program `test` can be executed either using `./test < input`
(after building `test`) or using `make run-stdout`. The program
is supposed to generate the following output: 

**NOTE**: the pid of each child may not match with your output.

    $ make run-stdout 
    ./test < input
    prompt: 
    Parent: THIS IS LINE 1
    Child 31201: dying
    Parent: THIS IS LINE 2
    Child 31202: dying
    Parent: THIS IS LINE 3
    Child 31203: dying
    Parent: THIS IS LINE 4
    Child 31204: dying
    Parent: THIS IS LINE 5
    Child 31205: dying
    Parent: THIS IS LINE 6
    Child 31206: dying
    Parent: THIS IS LINE 7
    Child 31207: dying
    Parent: THIS IS LINE 8
    Child 31208: dying
    Parent: THIS IS LINE 9
    Child 31209: dying
    Parent: THIS IS LINE 10
    Child 31210: dying
    Parent: THIS IS LINE 11
    Child 31211: dying
 
