#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function duplicates string
 * @str: the string to be duplicated
 * Return: pointer
 */
char *_strdup(char *str)
{
	int size = 0;
	char *i, *j;

	if (!str)
		return (NULL);

	i = str;
	while (*i++)
		size++;
	j = malloc(size + 1);
	if (!j)
		return (NULL);
	i = j;
	while (*str)
		*i++ = *str++;
	*i = 0;
	return (j);
}
