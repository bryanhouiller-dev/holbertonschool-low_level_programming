#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to print in reverse.
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int len = 0;

	/* Étape 1 : On cherche la longueur de la chaîne */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Étape 2 : On repart de la fin (len - 1) et on recule jusqu'à 0 */
	len--;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}

	/* Étape 3 : On ajoute un saut de ligne à la fin */
	_putchar('\n');
}
