#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main function
 *
 * @argc: count argument
 * @argv: arrrays of argugments
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int i, j = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	if (i / 25 > 0)
	{
		j += i / 25;
		i = i % 25;
	}
	if (i / 10 > 0)
	{
		j += i / 10;
		i = i % 10;
	}
	if (i / 5 > 0)
	{
		j += i / 5;
		i = i % 5;
	}
	if (i / 2 > 0)
	{
		j += i / 2;
		i = i % 2;
	}
	if (i != 0)
		j++;
	printf("%d\n", j);
	return (0);
}
