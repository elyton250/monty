#include "monty.h"
/**
 * push - Adds an element to the list
 * @head: head of the node
 *@line_number: the error line
 * Return: 0 success otherwise -1
 */

void push(stack_t **head, unsigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error during allocation\n");
		exit(EXIT_FAILURE);
	}

	if (!data)
	{
		fprintf(stderr, "L %u: usage: push integer\n", line_number);
	}

	if ((*head) == NULL)
	{
		new_node->n = data;
		new_node->next = NULL;
		new_node->prev = NULL;
		(*head) = new_node;
	}
	else
	{
		new_node->n = data;
		new_node->next = (*head);
		(*head)->prev = new_node;
		(*head) = new_node;
	}
}
