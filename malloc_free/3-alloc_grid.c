#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Alloue une grille 2D d'entiers initialisée à 0.
 * @width: Largeur de la grille (nombre de colonnes).
 * @height: Hauteur de la grille (nombre de lignes).
 *
 * Return: Pointeur vers la grille, ou NULL en cas d'échec
 * ou de valeurs invalides.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i > 0)
			{
				i--;
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		i++;
	}

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}

	return (grid);
}
