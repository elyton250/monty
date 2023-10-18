#include "monty.h"
/**
 * push - Adds an element to the list
 * @head -head of the node
 *
 * Return: 0 success otherwise -1
 */

stack_t *temp = NULL;

void push(stack_t **head, unsigned int line_number)
{
	if ((*head) == NULL)
	{
		(*head) = malloc(sizeof(stack_t));
	}

	if ((*head) == NULL)
	{
		fprintf(stderr, "Error during allocation\n");
		exit(EXIT_FAILURE);
	}

	if (!data)
	{
		fprintf(stderr, "L %u: Usage: Push integer\n", line_number);
	}

	if (temp == NULL)
	{
		(*head)->n = data;
		(*head)->next = NULL;
		(*head)->prev = NULL;
		temp = (*head);
	}
	else
	{
		(*head)->n = data;
		(*head)->next = temp;
		temp->prev = (*head);
		temp = (*head);
	}
}
