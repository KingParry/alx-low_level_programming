#include "main.h"

/**
 * get_bit - main function
 * @n: input data
 *
 * @index: input data
 * Return: Always 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int k; /*first variable for the get_bit*/

	if (index > 64)
		return (-1);

	k = n >> index;

	return (k & 1);
}
