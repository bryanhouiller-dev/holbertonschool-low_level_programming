#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first, followed by a new line.
 * @str: The string to process.
 *
 * Return: Nothing.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		/* Si le caractère suivant est la fin, on s'arrête pour ne pas dépasser */
		if (str[i + 1] == '\0')
		{
			break;
		}
		i += 2;
	}
	_putchar('\n');
}
