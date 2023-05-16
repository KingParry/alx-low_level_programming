#include "main.h"

/**
 * print_binary - main entry
 * @n: input
 *
 */
void print_binary(unsigned long int n)
{
	int g, h = 0;
	unsigned long int w;

	for (g = 63; g >= 0; g--)
	{
		w = n >> g;

		if (w & 1)
		{
			_putchar('1');
			h++;
		}
		else if (h)
			_putchar('0');
	}
	if (!h)
		_putchar('0');
}
