#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: First integer pointer to be swapped
 * @b: Second integer pointer to be swapped
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
