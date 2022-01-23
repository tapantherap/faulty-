# Faulty Test Program

This repo is about a simple short program (`test.c`) with a faulty behavior. The
program is about some subtle interactions between a parent process and its children processes while File I/O is involved.
The program uses some basic Linux system calls (e.g., `fork()`,
`waitpid()`).


## Files

- `test.c` - it contains the source code
- `Makefile` - some commands to build and run the program. You can also
  type those command directly on a terminal
- `input` - the sample input file
- `expected-output.md` - the desired expected output is shown
- `README` - This file


## Instructions

- **Environment setup**: You should try it in a Linux environment, preferrably,
  Ubuntu 18.04 or a similar OS. This code has been tested on several Linux distributions, including Ubuntu
  18.04, and Fedora, Alpine using their respective docker container.

  The faulty behavior of this program can be reproduced in other Linux distributions as well.
  **It is recommended that you pick one OS for yourself and try this
  program.**

  **NOTE:** you have to install essential packages and libraries to build this
  program and run Makefile, such as, `gcc`, `make`, unless those were
  not installed already. Version mismatch should not matter.

  On a Windows platform, you can either use a
  virtual machine (using, say, VirtualBox) running a Linux distribution
  (e.g., Ubuntu) or a Linux based Docker container. Of course, in Windows 10, you
  can leverage WSL to run a Linux terminal enviroment (e.g., Ubuntu) as an app,
  but the code has not been tested on any WSL-based Linux environment.


- **Build** command: `make`


- **Execute** command (two options)

  1. to display output on stdout: `make run-stdout`
  1. to redirect the output to a file: `make run-file`


## Tasks

1. Build and Execute the program either directly (like `./test < input`) or using a make command.
1. Observe the output **CAREFULLY** (especially, _the lines after **prompt:**._)
1. Does the output match with the expected output (see `expected-output.md`)? **NOTE:** the program is supposed to generate the expected output as shown in that file, but when you execute the program, it may exhibit faulty behavior and not generate the same output.
1. What discrepancy do you notice in the generated output?
1. What is the underlying reason of this faulty behavior?
1. Is there any solution to fix it? If there is, what would be your patch?


## Hint
Take a deep look at the source code and try to understand what the program is supposed to do. Compare your understanding with the expected output in `expected-output.md`. Does the expected output make sense to you?

Now observe if there is any discrepancy in the generated output and if so, where the discrepancy begins. Now look at the code again and see if you can convince yourself that the code is faulty. If so, where's the fault?

To solve this problem, some knowledge about these system calls is highly recommended. The Linux `man` command or any online search engine can be your friend.

