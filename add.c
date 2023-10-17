#include <tsdio.h>
#include <stdlib.h>
#include "monty.h"

stack_t *add(stack_t *head)
{
	stack_t *top = head;
	stack_t *following = top->next;

	if (head == NULL)
		fprintf(stderr, "No data in the stack.");
	if (head->next == NULL)
	{
		// print the error
	}
	following->n = top->n + following->n;
	head = following;
	free(top);
	return (head);
}
