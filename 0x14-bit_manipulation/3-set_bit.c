#include "main.h"
#include <stdlib.h>

/**
 * set_bit - start of function
 *
 * @n: parameter input
 * @index: index_input
 * Return: Always 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8) /*condition*/
		return (-1);
	*n |= (1 << index);
	return (1);
}
