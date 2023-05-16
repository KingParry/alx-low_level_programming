#include "main.h"

/**
 * binary_to_uint - program starts
 * @b: input
 *
 * Return: Always 0
 */

unsigned int binary_to_uint(const char *b)
{
	int f;
	unsigned int g = 0;

	if (!b)
		return (0);

	for (f = 0; b[f]; f++)
	{
		if (b[f] < '0' || b[f] > '1')
			return (0);
		g = 2 * g + (b[f] - '0');
	}
	return (g);
}
