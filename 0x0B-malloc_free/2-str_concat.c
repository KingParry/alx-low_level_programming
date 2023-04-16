#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to concantenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0;
	char *i, *j;

	i = s1;
	if (s1)
		while (*i++)
			size1++;
	else
		s1 = "";

	i = s2;
	if (s2)
		while (*i++)
			size2++;
	else
		s2 = "";

	j = malloc(size1 + size2 + 1);
	if (!j)
		return (NULL);

	i = j;
	while (*s1)
		*i++ = *s1++;
	while (*s2)
		*i++ = *s2++;
	*i = 0;

	return (j);
}
