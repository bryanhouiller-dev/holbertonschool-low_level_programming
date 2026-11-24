#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base integer.
 * @y: The exponent integer.
 *
 * Return: The result of x^y, or -1 if y is lower than 0.
 */
int _pow_recursion(int x, int y)
{
/* Cas d'erreur : si y est négatif */
if (y < 0)
return (-1);

/* Cas de base : tout nombre à la puissance 0 vaut 1 */
if (y == 0)
return (1);

/* Cas récursif : x * x^(y-1) */
return (x * _pow_recursion(x, y - 1));
}
