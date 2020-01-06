# MONTY
## Project of C: Stacks, Queues - LIFO, FIFO
This project challenges us to create a double linked list, interpreting the Monty language through the bytecode

## The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.
### Monty byte code files
Files containing Monty byte codes usually have the '.m' extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:
```c
hsh~$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
```

## Challenges
Some of the challenges of this project are:
 - Explain without the help of Google some concepts such as: What do LIFO and FIFO mean, What is a stack, and when to use it, What is a queue, and when to use it, What are the most common use cases of stacks and queues, etc.

## Requirements
 - Work in: vi, vim, emacs editos.
 - All your files should end with a new line.
 - You allowed to use a maximum of one global variable.
 - No more than 5 functions per file.
 - You are allowed to use the C standard library.
 - Don’t forget to push your header file, in this case it's called "monty.h".

## Compilation & Output
The code will be compiled this way:
```c
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

### How to use the "monty" program:
Usage: monty file, where file is the path to the file containing Monty byte code. example:
```c
$ ./monty bytecodes/01.m
```
| OPCODE | DESCRIPTION |
|------------ | --------------|
| push | pushes an element to the stack. |
| pall | prints all the values on the stack, starting from the top of the stack.|
| pint | prints the value at the top of the stack, followed by a new line.|
| pop | removes the top element of the stack. |
| swap | swaps the top two elements of the stack.|
| add | adds the top two elements of the stack. |
| nop | doesn’t do anything. |
| sub | subtracts the top element of the stack from the second top element of the stack.|
| div | divides the second top element of the stack by the top element of the stack.|
| mul | multiplies the second top element of the stack with the top element of the stack.|
| mod | computes the rest of the division of the second top element of the stack by the top element of the stack.|
| # | When the first non-space character of a line is #, treat this line as a comment (don’t do anything).|
| pchar | prints the char at the top of the stack, followed by a new line.|
| pstr | prints the string starting at the top of the stack, followed by a new line. |
| rotl | rotates the stack to the top. |
| rotr | rotates the stack to the bottom. |
| stack | sets the format of the data to a stack (LIFO). This is the default behavior of the program.|
| queue | sets the format of the data to a queue (FIFO).|

## Authors
[Andres Felipe Garcia] (https://github.com/andres0191/) y [Jonatan Mazo Castro] (https://github.com/MAZTRO/).

### Thanks for read.