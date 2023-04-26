#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - main entry
 * @name: name
 * @f: pointer
**/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
