#include <unistd.h>

/**
 * _putchar - function start
 * @c: character input
 * Return: Always 0
 *
 */
int _putchar(char c) /*function to print*/
{
	return (write(1, &c, 1));
}
