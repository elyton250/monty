#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

stack_t *push(stack_t *head ,int data)
{
	stack_t *temp = head;
	stack_t *new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		fprintf(stderr, "error during allocation");
	}
	new->n = data;
	new->prev = NULL;
	new->next = NULL;

	if (temp == NULL)
	{
		head = new;		
	}
	else
	{
		new->next = temp;
		temp->prev = new;
		head = new;
	}
	return head;
}

