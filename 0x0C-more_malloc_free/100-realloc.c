#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_realloc -man function
 * @old_size: unsigned integer
 * @p: pointer
 * @new_size: unsigned integer
 * Return: 0
 */

void *_realloc(void *p, unsigned int old_size, unsigned int new_size)
{
	char *r;

	if (new_size > old_size)
	{
		r = malloc(new_size);
		free(p);
		return (r);
	}

	if (new_size == old_size)
	{
		return (p);
	}

	if (p == NULL)
	{
		r = malloc(new_size);
		free(p);
		return (r);
	}

	if (new_size == 0 && p != NULL)
	{
		free(p);
		return (NULL);
	}
	return (p);
}
