#include "main.h"

/**
 * _strncpy - Copie une chaîne de caractères de src vers dest.
 * @dest: Le tampon de destination.
 * @src: La chaîne source à copier.
 * @n: Le nombre maximum d'octets à copier.
 *
 * Return: Un pointeur vers la chaîne de destination dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
