#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to evaluate.
 *
 * Return: The length of the string as an integer.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
