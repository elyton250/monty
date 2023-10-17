#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
int pall(stack_t *head)
{
	stack_t *temp = head;
	int count = 0;

	while (temp != NULL)
	{
		printf("%d", temp->data);
		count++;
		temp = temp->next;
	}
	printf("\n");
	return count;
}

