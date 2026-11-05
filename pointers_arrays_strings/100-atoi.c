#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer, or 0 if no numbers are found.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int digit_found = 0;
	int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit_found = 1;
			result = result * 10 - (s[i] - '0');
		}
		else if (digit_found == 1)
		{
			break;
		}
		i++;
	}

	if (digit_found == 0)
	{
		return (0);
	}

	if (sign < 0)
	{
		return (result);
	}
	else
	{
		return (-result);
	}
}
