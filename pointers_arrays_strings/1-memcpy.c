#include "main.h"

/**
 * _memcpy - Copie une zone mémoire vers une autre.
 * @dest: La zone mémoire de destination.
 * @src: La zone mémoire source.
 * @n: Le nombre d'octets à copier.
 *
 * Return: Un pointeur vers la zone mémoire dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
