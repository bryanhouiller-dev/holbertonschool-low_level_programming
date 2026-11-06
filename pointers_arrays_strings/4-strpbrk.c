#include "main.h"

/**
 * _strpbrk - Recherche dans une chaîne la première occurrence
 *            de l'un des octets d'une autre chaîne.
 * @s: La chaîne de caractères à analyser.
 * @accept: Les caractères à rechercher.
 *
 * Return: Un pointeur vers le premier octet de s qui correspond à accept,
 *         ou NULL si aucun octet n'est trouvé.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}

	return (0);
}
