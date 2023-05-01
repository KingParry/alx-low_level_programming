#include "main.h"
/**
 * _memset - main function
 * @s: input
 * @b: input
 * @n: input
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for  (z = 0; z < n; z++)
		*(s + z) = b;

	return (s);
}
