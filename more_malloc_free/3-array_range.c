#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum value included
 * @max: maximum value included
 *
 * Return: pointer to the newly created array, or NULL if fail
 */
int *array_range(int min, int max)
{
	int *tab;
	int i;
	int size;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min) + 1;

	tab = malloc(sizeof(int) * size);
	if (tab == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		tab[i] = min + i;
	}

	return (tab);
}
