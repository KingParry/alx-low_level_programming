#include "main.h"

/**
 * _atoi - main function
 * @s: input
 * Return: Always 0
 */
int _atoi(char *s)
{
	unsigned int v = 0, z = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + v) != '\0')
	{
		if (z > 0 && (*(s + v) < '0' || *(s + v) > '9'))
			break;

		if (*(s + v) == '-')
			pn *= -1;

		if ((*(s + v) >= '0') && (*(s + v) <= '9'))
		{
			if (z > 0)
				m *= 10;
			z++;
		}
		v++;
	}

	for (i = v - z; i < v; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
