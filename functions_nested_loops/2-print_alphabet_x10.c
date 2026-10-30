#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times,
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
	int i;
	char ch;

	i = 0;
	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
