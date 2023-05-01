#include "lists.h"

/**
 * free_listp - main entry
 * @head: input
 * Return: Always 0
 */
void free_listp(listp_t **head)
{
	listp_t *r;
	listp_t *w;

	if (head != NULL)
	{
		w = *head;
		while ((r = w) != NULL)
		{
			w = w->next;
			free(r);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - main entry
 * @head: input
 * Return: Always 0
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t numnodes = 0;
	listp_t *hptr, *i, *j;

	hptr = NULL;
	while (head != NULL)
	{
		i = malloc(sizeof(listp_t));

		if (i == NULL)
			exit(98);

		i->p = (void *)head;
		i->next = hptr;
		hptr = i;

		j = hptr;

		while (j->next != NULL)
		{
			j = j->next;
			if (head == j->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (numnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		numnodes++;
	}

	free_listp(&hptr);
	return (numnodes);
}
