#include "main.h"

/**
 * get_bit - main function
 * @n: input
 *
 * @index: input
 * Return: Always 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int k; /*first variable for the get_bit*/

	k = (n >> index);
	if (index > 32)
	return (-1);
	return (k & 1);
}
