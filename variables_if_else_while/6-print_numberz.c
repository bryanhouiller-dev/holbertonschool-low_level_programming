#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0'); /* 1er usage : convertit l'entier en chiffre affichable */
	}

	putchar('\n'); /* 2e et dernier usage : le retour à la ligne */

	return (0);
}
