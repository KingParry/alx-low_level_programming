#include "main.h"

/**
 * flip_bits - start of function
 *
 * @n: input 1
 * @m: input 2
 * Return: Always 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int r;
	unsigned int k = 0;
	unsigned long int x = sizeof(unsigned long int) * 8;

	for (r = 0; r < x; r++) /* the for loop */
	{
		if ((m & 1) != (n & 1)) /* the if condition*/
			k += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (k);
}
