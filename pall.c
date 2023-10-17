#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int count = 0;
	(void)(line_number);

	while (temp != NULL)
	{
		printf("%d", temp->n);
		count++;
		temp = temp->next;
	}
	printf("\n");
}
