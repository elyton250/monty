#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
void pint(stack_t *head)
{
	if (head != NULL)
	{
		printf("%d\n", head->data);
	}
	else
		fprintf(stderr, "stack is empty.\n");
}

