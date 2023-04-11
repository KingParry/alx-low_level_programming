#include "main.h"

/**
 * main -main function
 * @argc: the count argument
 * @argv: array of argument
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int r, s, sum;

	for (r = 1; r < argc; r++)
	{
		for (s = 0; argv[r][s]; s++)
		{
			if (argv[r][s] < '0' || argv[r][s] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[r]);
	}
	printf("%d\n", sum);
	return (0);
}
