#include "main.h"

/**
 * _strlen - main function
 * @s: input
 * Return: Always 0
 */
int _strlen(char *s)
{
	int h = 0;

	while (*(s + h) != '\0')
		h++;
	return (h);
}
