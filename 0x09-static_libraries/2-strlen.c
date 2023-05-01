#include "main.h"
/**
 * _strchr - main entry
 * @s: input
 * @c: input
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	unsigned int z = 0;

	for (; *(s + z) != '\0'; z++)
		if (*(s + z) == c)
			return (s + z);
	if (*(s + z) == c)
		return (s + z);
	return ('\0');
}
