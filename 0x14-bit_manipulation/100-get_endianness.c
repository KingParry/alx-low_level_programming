#include "main.h"

/**
 * get_endianness - main entry
 * Return: Always 0
 *
 */
int get_endianness(void) /*returns void*/
{
	unsigned int p = 1;
	char *z = (char *) &p;

	return (*z);
}
