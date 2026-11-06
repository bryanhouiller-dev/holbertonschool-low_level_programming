#include "main.h"

/**
 * _strspn - Calcule la longueur du préfixe
 *           composé de caractères acceptés.
 * @s: La chaîne à analyser.
 * @accept: Les caractères acceptés.
 *
 * Return: Le nombre de caractères correspondants.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;
	int found;

	while (s[i] != '\0')
	{
		found = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
			j++;
		}
		if (found == 0)
		{
			break;
		}
		i++;
	}

	return (i);
}
