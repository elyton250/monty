#include "monty.h"

/**
 * split_string - Function to split string according to delimiter given.
 * @str: String to be splet.
 * @delim: Delimiter to be used.
 * Return: Array of strings.
 */

char *split_string(char *str, const char *delim)
{
	static char *last_pos;
	char *start;

	/* Check if str is NULL */
	if (str != NULL)
		last_pos = str;

	/* Check if last_pos is still NULL */
	if (last_pos == NULL || *last_pos == '\0')
		return (NULL);

	/* Find the first token */
	while (*last_pos != '\0' && strchr(delim, *last_pos) != NULL)
		last_pos++;

	/* Check if there are no tokens left */
	if (*last_pos == '\0')
		return (NULL);

	/* Update the start position */
	start = last_pos;

	/* Find the end of the token */
	while (*last_pos != '\0' && strchr(delim, *last_pos) == NULL)
		last_pos++;

	/* Null-terminate the token */
	if (*last_pos != '\0')
	{
		*last_pos = '\0';
		last_pos++;
	}

	return (start);
}
