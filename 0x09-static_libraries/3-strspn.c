#include "main.h"
/**
 * _strspn - main function
 * @s: input
 * @accept: input
 * Return: Always o
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int w, x, bool;

	for (w = 0; *(s + w) != '\0'; w++)
	{
		bool = 1;
		for (x = 0; *(accept + x) != '\0'; x++)
		{
			if (*(s + w) == *(accept + x))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (w);
}
