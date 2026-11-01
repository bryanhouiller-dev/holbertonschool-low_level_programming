#include "main.h"

/**
 * _islower - Vérifie si un caractère est une minuscule.
 * @c: Le caractère à vérifier sous forme d'entier.
 *
 * Return: 1 si c est une minuscule, 0 sinon.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
