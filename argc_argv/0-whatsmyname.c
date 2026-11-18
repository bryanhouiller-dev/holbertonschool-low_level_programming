#include <stdio.h>

/**
 * main - Affiche le nom du programme
 * @argc: Le nombre d'arguments
 * @argv: Le tableau des arguments
 *
 * Return: Toujours 0 (Succès)
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
