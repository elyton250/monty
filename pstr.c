#include "monty.h"
/**
 * pstr - Prints the string starting from the
 * top of the stack
 *
 * @stack: Pointer to the stack
 * @line_number: The line number of executing line
 *
 * Return: Nothing
 */
void pstr(my_stack_t **stack, unsigned int line_number)
{
	my_stack_t *top = *stack;

	int i = 0;
	char str[1024];

	(void) line_number;

	if ((*stack) == NULL)
		printf("\n");

	while (top != NULL)
	{
		int data = top->n;

		if (data == 0 || (data < 1 || data > 127))
		{
			break;
		}

		str[i] = (char)data;

		top = top->next;
		i++;
	}

	str[i] = '\0';

	printf("%s\n", str);
}
