#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - main function.
 * @array: Name input
 * @size: iterations
 * @cmp: input
 * Return: Always 0
	*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
		{
			return (j);
		}
	}

	return (-1);
}
