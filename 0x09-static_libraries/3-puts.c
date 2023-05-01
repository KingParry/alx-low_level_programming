#include "main.h"

/**
 * _puts - main function
 * @str: input
 * Return: Always
 */
void _puts(char *str)
{
	int z;

	for (z = 0; str[z] != '\0'; z++)
	{
		_putchar(str[z]);
	}
	_putchar('\n');
}
