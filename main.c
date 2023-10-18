#include "monty.h"

int main(int argc, char *argv[])
{
	stack_t *stack = NULL;
	/*char *tokens [2];*/

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	if (read_file(argv[1], &stack) != 0)
	{
		return (EXIT_FAILURE);
	}

	/*free(tokens);*/
	return (0);
}

