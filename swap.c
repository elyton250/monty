#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *top = (*stack);
	stack_t *following = top->next;

	if ((*stack) == NULL || (*stack)->next == NULL)/*should we do a function that counts a linked list?*/
	{
		fprintf(stderr,"L %u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	top->next = following->next;
	top->prev = following;
	following->prev = NULL;
	following->prev = top;
	following->next->prev = top;
	if (top == (*stack))
	{
		(*stack) = following;
	}
}
