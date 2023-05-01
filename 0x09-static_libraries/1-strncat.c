#include "main.h"
/**
 * _strncat - main entry
 * @dest: input
 * @src: input
 * @n: input
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int s = 0, r = 0;

	while (*(dest + s) != '\0')
	{
		s++;
	}

	while (r < n)
	{
		*(dest + s) = *(src + r);
		if (*(src + r) == '\0')
			break;
		s++;
		r++;
	}
	return (dest);
}
