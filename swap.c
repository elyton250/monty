#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
stack_t *swap(stack_t *head)
{
	stack_t *top = head;
	stack_t *following = top->next

	if (head == NULL)
	{
		fprintf(stderr, "No data in the stack.\n");
	}
	if (head->next == NULL)//should we do a function that counts a linked list?
	{
		// handle the error.
	}
	top->next = following->next;
	top->prev = following;
	following->prev = NULL;
	following->prev = top;
	following->next->prev = top;
	if (top == head)
	{
		head = following;
	}
	return (head);
}
