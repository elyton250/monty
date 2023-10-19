#include "monty.h"
/**
 * push - Adds an element to the list
 * @head: head of the node
 *@line_number: the error line
 *@data: the added data to the stack
 * Return: 0 success otherwise -1
 */

void push(stack_t **head, unsigned int line_number, int data)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error during allocation\n");
		free_stack(head);
		exit(EXIT_FAILURE);
	}
	if (data)
	{
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
	else
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		free_stack(head);
		exit(EXIT_FAILURE);
	}
}
