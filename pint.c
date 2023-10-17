#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
void pint(stack_t **stack, unsigned int line_number)
{
	if ((*stack) != NULL)
	{
		printf("%d\n", (*stack)->n);
	}
	else
		fprintf(stderr, "stack is empty.\n");
}

