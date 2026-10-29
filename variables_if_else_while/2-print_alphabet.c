#include <stdio.h>
#include <time.h>

/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch); /* 1er usage de putchar : affiche la lettre */
	}

	putchar('\n'); /* 2e et dernier usage de putchar : le retour à la ligne */

	return (0);
}
