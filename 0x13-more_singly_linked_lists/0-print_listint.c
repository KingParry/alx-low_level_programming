#include "lists.h"

/**
 * print_listint - main function
 * @h: input
 * Return: Always 0
 */

size_t print_listint(const listint_t *h)
{
	size_t j;

	j = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}
