#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
/**
 * pint - Prints the element at the top of the stack
 * @stack: The Pointer to the stack to use
 * @line_number: The line number of the executing line
 *
 * Return: Nothing
 */

void pint(my_stack_t **stack, unsigned int line_number)
{
	if ((*stack) != NULL)
	{
		printf("%d\n", (*stack)->n);
	}
	else
		fprintf(stderr, "L%u: can't pint, stack is empty.\n", line_number);
}

