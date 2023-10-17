#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

void push(stack_t **stack ,unsigned line_number, int data)
{
	stack_t *temp = *stack;
	stack_t *new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		fprintf(stderr, "error during allocation");
		exit(EXIT_FAILURE);
	}
	if (!data || scanf("%d", &data) != 1)
	{
		fprintf(stderr,"L %u: usage: push integer", line_number);
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
