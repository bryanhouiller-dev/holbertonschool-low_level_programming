#include <stdio.h>

/**
 * main - Affiche le nombre d'arguments passés au programme
 * @argc: Le nombre d'arguments
 * @argv: Le tableau des arguments (non utilisé ici)
 *
 * Return: Toujours 0 (Succès)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	/* On affiche argc - 1 pour ne pas compter le nom du programme */
	printf("%d\n", argc - 1);

	return (0);
}
