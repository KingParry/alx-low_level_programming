#include "main.h"
/**
 * _memset - main entry
 * @s: input
 * @b: input
 * @n: input
 * Return: always0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int t;

	for (t = 0; n > 0; t++)
	{
		s[t] = b;
		n--;
	}
	return (s);
}
