#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: Number of elements in the array.
 * @size: Size in bytes of each element.
 *
 * Return: Pointer to the allocated memory, or NULL if it fails or inputs are 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}

	return ((void *)ptr);
}
