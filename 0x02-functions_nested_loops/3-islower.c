#include "main.h"

/**
 * _islower - Finds lower case
 * c: The character:to be checked
 * Return:  for lowercase 0 for everything else
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
