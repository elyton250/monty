#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
#include <string.h>
instruction_t instruction_set[] = {
	{"push", push},
	{"pall", pall},
	{"pint", pint},
	{"pop", pop},
	{"swap", swap},
	{"add", add},
	/*{"nop", nop},*/
	/*{"sub", sub},*/
};
int data;

int main(int argc, char *argv[])
{
	FILE* makefile;
	stack_t *stack = NULL;
	unsigned int line_number = 0;
	char opcode[16];
	char command[1024];
	char *s_command;
	/*char *tokens [2];*/
	int i, t = 0;
	int found_ins = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	makefile = fopen(argv[1], "r");
	
	if (makefile == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	
	while (fgets(command, sizeof(command), makefile) != NULL)
	{
		line_number++;

		s_command = strtok(command, " \t\n");
	

		strcpy(opcode, s_command);
		printf("%s: this the operation\n", s_command);

		for (i = 0; i <sizeof(instruction_set) / sizeof(instruction_set[0]); i++)
		{
			if (strcmp(opcode, instruction_set[i].opcode) == 0)
			{
				instruction_set[i].f(&stack, line_number);
				found_ins = 1;
				break;
			}
		}
		
		if (!found_ins)
		{
			fprintf(stderr,"L %d: unknown instruction %s\n", line_number, opcode);
			fclose(makefile);
			return(EXIT_FAILURE);
		}
	}
	/*free(tokens);*/
	fclose(makefile);
	return (0);
}

