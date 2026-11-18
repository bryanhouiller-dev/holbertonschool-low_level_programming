#include <stdio.h>

/**
 * main - Affiche tous les arguments reçus par le programme
 * @argc: Le nombre d'arguments
 * @argv: Le tableau des arguments
 *
 * Return: Toujours 0 (Succès)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
