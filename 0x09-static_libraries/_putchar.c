#include <unistd.h>

/**
 * _putchar - main entry
 * @c: input
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
