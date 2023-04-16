#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - main function of the program
 * @b: character
 * @size: size of the inputs
 * Return: an array
 */

char *create_array(unsigned int size, char b)
{
	char *array;
	unsigned int j;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		array[j] = b;
	return (array);
}
