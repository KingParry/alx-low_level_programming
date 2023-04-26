#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - main function
 * @array: pointer
 * @action: input
 * @size: input
 * Return: always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
