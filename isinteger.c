#include "monty.h"
/**
 * isinteger - Checks if the string is integer
 * @str: the string to check
 *
 * Return: true otherwise false
 */
bool isinteger(const char *str)
{
	if (*str == '-')
	{
		str++; /* Skip optional minus sign*/
	}

	if (*str == '\0')
	{
		return (false); /*Empty string or just a minus sign*/
	}

	while (*str)
	{
		if (*str < '0' || *str > '9')
	{
			return (false); /*Non-digit character found*/
		}
		str++;
	}

	return (true);
}
