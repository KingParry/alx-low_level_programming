#include "main.h"

/**
 * swap_int - swaps variables location
 * @a: pointer to first value
 * @b: pointer to second value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
