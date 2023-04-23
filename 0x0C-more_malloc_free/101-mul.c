#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - main entry
 * @argc: arguments
 * @argv: arguments
 * Return: always 0
**/

int main(int argc, char *argv[])
{
	unsigned long mul;
	int r, s;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (r = 1; r < argc; r++)
	{
		for (s = 0; argv[r][s] != '\0'; s++)
		{
			if (argv[r][s] > 57 || argv[r][s] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
