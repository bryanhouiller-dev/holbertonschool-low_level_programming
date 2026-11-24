#include "main.h"

int find_sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root, or -1 if none exists.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (find_sqrt(n, 0));
}

/**
 * find_sqrt - Helper function to find the square root recursively.
 * @n: The number to evaluate.
 * @i: The number to test as a potential square root.
 *
 * Return: The square root, or -1.
 */
int find_sqrt(int n, int i)
{
if ((i * i) > n)
return (-1);
if ((i * i) == n)
return (i);
return (find_sqrt(n, i + 1));
}
