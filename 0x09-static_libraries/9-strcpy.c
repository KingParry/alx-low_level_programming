#include "main.h"
#include <stdio.h>

/**
 * _strcpy - main function
 * @dest: destination
 * @src: input
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int h = 0;

	while (h >= 0)
	{
		*(dest + h) = *(src + h);
		if (*(src + h) == '\0')
			break;
		h++;
	}
	return (dest);
}
