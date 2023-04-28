#include <stdio.h>
#include "lists.h"
/**
 * print_list - main function
 * @h: pointer input
 * Return: always 0
**/
size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		j++;
	}
	return (j);
}
