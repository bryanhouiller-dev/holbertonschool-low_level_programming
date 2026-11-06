#include "main.h"

/**
 * _strncat - Concatène deux chaînes en utilisant au plus n octets de src.
 * @dest: La chaîne de destination.
 * @src: La chaîne source à ajouter.
 * @n: Le nombre maximum d'octets à utiliser depuis src.
 *
 * Return: Un pointeur vers la chaîne de destination dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
