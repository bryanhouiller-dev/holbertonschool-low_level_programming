#include <stdio.h>
#include <stdlib.h>

/**
 * check_num - Vérifie si une chaîne de caractères ne
 *             contient que des chiffres
 * @str: La chaîne à vérifier
 *
 * Return: 1 si c'est un nombre, 0 sinon
 */
int check_num(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - Additionne des nombres positifs passés en arguments
 * @argc: Le nombre d'arguments
 * @argv: Le tableau des arguments
 *
 * Return: 0 en cas de succès, 1 en cas d'erreur
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!check_num(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
