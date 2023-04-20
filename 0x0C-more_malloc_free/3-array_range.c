#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *array_range - main function
 *
 * @min: integer
 * @max: integer
 *  Return: 0
 */

int *array_range(int min, int max)
{
	int *r;
	int counter;

	if (min > max)
	{
		return (NULL);
	}

	r = malloc(sizeof(int) * (max - min + 1));

	if (r == NULL)
	{
		return (NULL);
	}

	counter = 0;

	while (min <= max)
	{
		r[counter] = min;
		min++;
		counter++;
	}
	return (r);
}
