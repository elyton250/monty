#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

void push(stack_t **stack ,unsigned line_number)
{
	stack_t *temp = *stack;
	stack_t *new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		fprintf(stderr, "error during allocation\n");
		exit(EXIT_FAILURE);
	}
	if (!data)
	{
		fprintf(stderr,"L %u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	new->n = data;
	new->prev = NULL;
	new->next = NULL;

	if (temp == NULL)
	{
		(*stack) = new;		
	}
	else
	{
		new->next = temp;
		temp->prev = new;
		temp = new;
		(*stack) = temp;
	}
}
