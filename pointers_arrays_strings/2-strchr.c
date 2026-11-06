#include "main.h"

/**
 * _strchr - Localise un caractère dans une chaîne.
 * @s: La chaîne de caractères à parcourir.
 * @c: Le caractère à rechercher.
 *
 * Return: Un pointeur vers la première occurrence de c,
 *         ou NULL si le caractère n'est pas trouvé.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);
}
