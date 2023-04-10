#include <stdio.h>
#include "main.h"

/**
 * main - main program start up
 *
 * @argc: arg count
 * @argv: arg vector
 * Return: return 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
