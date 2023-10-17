#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *top = *stack;
	stack_t *following = top->next;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L %u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	following->n += top->n;
	following->prev = NULL;
	(*stack) = following;
	free(top);
}
