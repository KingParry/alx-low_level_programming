#include "lists.h"

/**
 * free_listp2 - main function
 * @head: input
 * Return: Always 0
 */
void free_listp2(listp_t **head)
{
	listp_t *v;
	listp_t *x;

	if (head != NULL)
	{
		x = *head;
		while ((v = x) != NULL)
		{
			x = x->next;
			free(v);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - main entry
 * @h: input
 * Return: Always 0
 */
size_t free_listint_safe(listint_t **h)
{
	size_t w = 0;
	listp_t *hptr, *u, *y;
	listint_t *x;

	hptr = NULL;
	while (*h != NULL)
	{
		u = malloc(sizeof(listp_t));

		if (u == NULL)
			exit(98);

		u->p = (void *)*h;
		u->next = hptr;
		hptr = u;

		y = hptr;

		while (y->next != NULL)
		{
			y = y->next;
			if (*h == y->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (w);
			}
		}

		x = *h;
		*h = (*h)->next;
		free(x);
		w++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (w);
}
