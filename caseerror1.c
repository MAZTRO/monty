#include "monty.h"
/**
  * case_error_1 - functiont that execute one case error depend of the optino.
  * @ID: Date of input
  * @structure: double pointer of input
  * @line_number: number of line
  * @caso: pointer of input
  **/
void case_error_1(FILE ID, stack_t **strcuture, int line_number, int data, char * opcode)
{
	switch(data)
			{
				case 1:
					fprintf(stderr, "Error: Can't open file %s\n", ID);
					break;
				case 2:
					fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
					break;
				case 3:
					fprintf(stderr, "Error: malloc failed\n");
					break;
				case 4:
					fprintf(stderr, "L%u: usage: push integer\n", line_number)
					break;
				case 5:
					fptinf(stderr, "L%u: can't print, stack empty\n", line_number);
					break;
				case 6:
					fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
					break;
				case 7:
					frpitnf(stderr, "L%u: can't swap, stack too short\n", line_number);
					break;
				case 8:
					frpintf(stderr, "L%u: can't add, stack too short\n", line_number);
					break;
			}
	free_all(structure);
	exit(EXIT_FAILURE);
}
