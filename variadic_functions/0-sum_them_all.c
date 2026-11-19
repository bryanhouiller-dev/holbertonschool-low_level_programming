#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 *
 * Return: The sum of all parameters, or 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	/* Initialisation de la liste des arguments après 'n' */
	va_start(args, n);

	/* Boucle pour parcourir les 'n' arguments */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	/* Nettoyage de la liste */
	va_end(args);

	return (sum);
}
