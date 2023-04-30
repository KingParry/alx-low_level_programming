#include "lists.h"

/**
 * listint_len - function entry
 * @h: input
 * Return: always 0
 */

size_t listint_len(const listint_t *h)
{
	size_t j;

	j = 0;

	while (h != NULL)
	{
		h = h->next;
		j++;
	}
	return (j);
}
