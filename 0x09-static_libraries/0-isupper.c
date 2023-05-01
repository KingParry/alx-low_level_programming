#include "main.h"

/**
 * _isupper - main entry
 * @c: input
 * Return: Always o
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
