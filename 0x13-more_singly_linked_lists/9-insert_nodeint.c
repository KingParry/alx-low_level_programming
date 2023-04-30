#include "lists.h"

/**
 * insert_nodeint_at_index - main entry
 * @head: input
 * @idx: input
 * @n: input
 * Return: Always 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int v;
	listint_t *j;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (v = 0; v < idx - 1 && h != NULL; v++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	j = malloc(sizeof(listint_t));
	if (j == NULL)
		return (NULL);

	j->n = n;

	if (idx == 0)
	{
		j->next = *head;
		*head = j;
	}
	else
	{
		j->next = h->next;
		h->next = j;
	}

	return (j);
}
