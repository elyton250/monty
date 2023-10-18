#include "monty.h"
/**
 * trim_whitespace - Trim whitespaces from a string
 * @str: Pointer to string
 *
 * Return: Pointer to trimmed string
 */
char *trim_whitespace(char *str)
{
	char *end;

	while (isspace((unsigned char)*str))
		str++;

	if (*str == 0)
		return (str);

	end = str + strlen(str) - 1;

	while (end > str && isspace((unsigned char)*end))
		end--;

	end[1] = '\0';

	return (str);
}
