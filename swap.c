#include "monty.h"
/**
 * swap - Swaps the top 2 elements in the stack
 * @stack: Pointer to the stack
 * @line_number: The line number of the executing line
 *
 * Return: Nothing
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *top = (*stack);
	stack_t *following = top->next;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L %u: can't swap, stack too short\n", line_number);
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
