#include "main.h"

/**
 * _strstr - main function
 * @haystack: input
 * @needle: input
 * Return: Always 0
*/
char *_strstr(char *haystack, char *needle)
{
	char *j;
	char *i;

	while (*haystack != '\0')
	{
		j = haystack;
		i = needle;

		while (*haystack != '\0' && *i != '\0' && *haystack == *i)
		{
			haystack++;
			i++;
		}
		if (!*i)
			return (j);
		haystack = j + 1;
	}
	return (0);
}

