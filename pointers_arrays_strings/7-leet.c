#include "main.h"

/**
 * leet - Encode une chaîne de caractères en 1337.
 * @s: La chaîne de caractères à encoder.
 *
 * Return: Un pointeur vers la chaîne encodée.
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char letters[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	while (s[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
			{
				s[i] = nums[j];
			}
			j++;
		}
		i++;
	}

	return (s);
}
