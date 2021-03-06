#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number, unsigned int value);
} instruction_t;

void push(stack_t **stack, unsigned int line_number, unsigned int value);
void pall(stack_t **stack, unsigned int line_number, unsigned int value);
void pint(stack_t **stack, unsigned int line_number, unsigned int value);
void pop(stack_t **stack, unsigned int line_number, unsigned int value);
void swap(stack_t **stack, unsigned int line_number, unsigned int value);
int get_comparation(char *Token, stack_t **structure, unsigned int count);
void free_all(stack_t **stack);
void add(stack_t **stack, unsigned int line_number, unsigned int value);
void nop(stack_t **stack, unsigned int line_number, unsigned int value);
void case_error_1(stack_t **structure, unsigned int ln_num, unsigned int data);

#endif
