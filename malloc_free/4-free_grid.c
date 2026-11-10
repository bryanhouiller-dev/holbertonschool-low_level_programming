#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Libère une grille 2D précédemment allouée.
 * @grid: Pointeur vers la grille à libérer.
 * @height: Hauteur de la grille (nombre de lignes).
 *
 * Return: Rien.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
