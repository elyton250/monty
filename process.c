#include "monty.h"
/**
*parser - Splits line into command and args
*@trimmed_line: the line from the file
*@stack: the head of the stack
*@count: lines count
*Return: Nothing
*/

int parser(char **trimmed_line, unsigned int *count, my_stack_t **stack)
{
	unsigned int i = 0;
	int found_ins = 0;
	char *opcode = split_string(*trimmed_line, " \t\n");
	char *argument = split_string(NULL, " \t\n");

	instruction_t instruction_set[] = {
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"pchar", pchar},
		{"pstr", pstr},
		{"sub", sub},
		{"div", divide},
		{"mul", mul},
		{"mod", mod},
	};

	if (strcmp(opcode, "push") == 0)
	{
		push(stack, *count, argument);
		found_ins = 1;
	}
	for (i = 0; i < sizeof(instruction_set) / sizeof(instruction_set[0]); i++)
	{
		if (strcmp(opcode, instruction_set[i].opcode) == 0)
		{
			instruction_set[i].f(stack, *count);
			found_ins = 1;
			break;
		}
	}
	if (!found_ins)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", *count, opcode);
		return (EXIT_FAILURE);
	}
	return (0);
}
