#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * string_nconcat - main function
 * @s1: 1st string
 * @s2: 2nd string
 * @n: No. of characters
 *
 * Return: always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, z;
	char *i, *j;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (len1 = 0, i = s1; *i; i++)
		len1++;
	for (len2 = 0, i = s2; *i; i++)
		len2++;
	if (n > len2)
		n = len2;

	j = malloc((len1 + n + 1) * sizeof(char));
	if (!j)
		return (0);

	i = j;
	while (*s1)
		*i++ = *s1++;
	z = 0;
	while (z < n)
	{
		*i++ = s2[z++];
	}
	*i = 0;

	return (j);
}
