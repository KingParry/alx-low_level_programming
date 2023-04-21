#include "variadic_functions.h"

/**
 *  sum_them_all -main function
 *  @n: const
 *  Return: always 0
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list r;

	unsigned int i;
	int sum = 0;

	va_start(r, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(r, unsigned int);
	}

	va_end(r);

	return (sum);

}
