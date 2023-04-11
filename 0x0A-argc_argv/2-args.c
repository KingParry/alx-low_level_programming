#include "main.h"

/**
 * main - main program
 * @argc: argument no.
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
