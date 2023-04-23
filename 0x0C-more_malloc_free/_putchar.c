#include <unistd.h>

/**
 * _putchar - main function
 * @c: inputs
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
