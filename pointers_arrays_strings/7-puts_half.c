#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: The string to print.
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	/* Étape 1 : Trouver la longueur de la chaîne */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Étape 2 : Déterminer où commence la seconde moitié */
	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len + 1) / 2;
	}

	/* Étape 3 : Afficher la seconde moitié jusqu'à la fin */
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
