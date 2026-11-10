#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatène deux chaînes de caractères.
 * @s1: Première chaîne.
 * @s2: Deuxième chaîne.
 *
 * Return: Pointeur vers la nouvelle chaîne, ou NULL en cas d'échec.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL);

	while (i < len1)
	{
		concat[i] = s1[i];
		i++;
	}

	while (j < len2)
	{
		concat[i] = s2[j];
		i++;
		j++;
	}

	concat[i] = '\0';

	return (concat);
}
