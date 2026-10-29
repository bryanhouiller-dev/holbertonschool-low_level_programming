#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
    char lt;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);

	}
    for (lt = 'a'; lt <= 'f'; lt++)
	{
		putchar(lt);

	}

	putchar('\n');

	return (0);
}
