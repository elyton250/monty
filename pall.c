#include "monty.h"
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *pointer = temp;
	int count = 0;

	(void) line_number;
	(void) count;
	(void) stack;

	if (pointer == NULL)
		printf("Stack is empty\n");
	else
	{
		while (pointer != NULL)
		{
			printf("%d\n", pointer->n);
			count++;
			pointer = pointer->next;
		}
	}
	printf("%d elements printed\n", count);
}
