#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplie deux nombres passés en arguments
 * @argc: Le nombre d'arguments
 * @argv: Le tableau des arguments
 *
 * Return: 0 en cas de succès, 1 en cas d'erreur
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* On vérifie s'il y a exactement 2 arguments (argc doit valoir 3) */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* On convertit les chaînes de caractères en entiers avec atoi */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* On effectue la multiplication */
	result = num1 * num2;

	/* On affiche le résultat */
	printf("%d\n", result);

	return (0);
}
