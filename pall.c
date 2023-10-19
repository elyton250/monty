#include "monty.h"
/**
 * pall - Prints everything in a stack
 * @stack: the stack to be printed
 * @line_number: The line number of executing line
 *
 * Return: Nothing
 */
void pall(my_stack_t **stack, unsigned int line_number)
{
	my_stack_t *pointer = (*stack);
	int count = 0;

	(void) line_number;
	(void) count;
	(void) stack;

	if (pointer != NULL)
	{
		while (pointer != NULL)
		{
			printf("%d\n", pointer->n);
			count++;
			pointer = pointer->next;
		}
	}
}
