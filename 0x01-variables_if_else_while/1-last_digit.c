#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	j = (n % 10);
	if (j > 5)
		printf("Last digit of %d is %d and is greater than 5", n, j);
	else if (j == 0)
		printf("Last digit of %d is %d and is 0", n, j);
	else if (j < 6 && j != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, j);
	printf("\n");
	return (0);
}
