#include "main.h"

/**
 * _isdigit - main function
 * @c: input
 * Return: always 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
