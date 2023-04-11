#include "main.h"

/**
 * main - main program
 * @argc: argument number
 * @argv: argument  arrays
 * Return: return (0)
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
				printf("%s\n", "Error");
				return (1);
			}
		}
		sum = sum + atoi(argv[r]);
	}
	printf("%d\n", sum);
	return (0);
}
