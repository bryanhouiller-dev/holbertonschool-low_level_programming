#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to reverse.
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char tmp;

	/* Étape 1 : Trouver la longueur de la chaîne */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Étape 2 : Échanger les caractères début et fin */
	len--;
	while (i < len)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		i++;
		len--;
	}
}
