#include "main.h"

/**
 * main - start main program
 * @argc: argument no.
 * @argv: argument array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int r;

	if (argc == 3)
	{
		r = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", r);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
