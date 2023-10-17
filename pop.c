#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

stack_t *pop(stack_t *head)
{
	stack_t *temp = head;
	stack_t *temp2;
	
	if (head == NULL)
	{
		// prints can t pop error and exit with exit failure
	}
	temp2 = temp->next;
	free(temp);
	return temp2;
}
	
