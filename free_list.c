#include "monty.h"

/**
  *free_stack - it frees the stack once the program closes
  *@stack: the head of the stack
  */
void free_stack(stack_t **stack)
{
	stack_t *current;

	if ((*stack) != NULL)
	{
		while (*stack != NULL)
		{
			current = (*stack);
			(*stack) = (*stack)->next;
			free(current);
		}
	}
}
