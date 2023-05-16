#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - function begins
 * @n: input one
 *
 * @index: input two
 * Return: Always 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)/*condition*/
		return (-1);/*return value*/
	*n &= ~(1 << index);
	return (1);
}
