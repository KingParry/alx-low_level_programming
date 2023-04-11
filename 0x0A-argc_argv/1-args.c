#include <stdio.h>
#include "main.h"

/**
 * main - prints the no. of argumnts to the programme
 * @argc: no. of argumnts
 * @argv: array of argumnts
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
