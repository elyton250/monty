#include "monty.h"
/**
 * mod - find the modulus of the elements in the stack and append the result to the stack
 * @stack: The stack
 * @line_number: The line number of the opcode
 *
 * Return: Nothing
 */

void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *top = *stack;
	stack_t *following = top->next;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (top->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	following->n = following->n % top->n;
	following->prev = NULL;
	(*stack) = following;
	free(top);
}
