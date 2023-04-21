#include <stdio.h>
#include "variadic_functions.h"

/**
 *  print_numbers -  main functions
 *  @seperator: String btn Nos.
 *  @n: arguments
 *  Return void
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list r;

	unsigned int i;

	va_start(r, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(r, unsigned int));

		if (seperator != NULL && i < n - 1)
		{
			printf("%s", seperator);
		}
	}
	putchar('\n');

	va_end(r);
}
