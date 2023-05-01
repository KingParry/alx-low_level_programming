#include "main.h"
/**
 * _strcat - concantenate
 * @dest: input
 * @src: input
 * Return: Always o
 */
char *_strcat(char *dest, char *src)
{
	int z = 0, y = 0;

	while (*(dest + z) != '\0')
	{
		z++;
	}

	while (y >= 0)
	{
		*(dest + z) = *(src + y);
		if (*(src + y) == '\0')
			break;
		z++;
		y++;
	}
	return (dest);
}
