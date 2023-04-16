#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - where main function
 * @av: array
 * @ac: integer
 * Return: always zero
 */
char *argstostr(int ac, char **av)
{
	int j;
	int i;
	int k = 0;
	int len = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len = len + ac;

	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		if (s[k] == '\0')
		{
			s[k++] = '\n';
		}
	}
	return (s);
}
