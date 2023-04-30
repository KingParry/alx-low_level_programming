#include "lists.h"

/**
 * free_listp - main function
 * @head: input
 * Return: Always 0
 */
void free_listp(listp_t **head)
{
	listp_t *k;
	listp_t *j;

	if (head != NULL)
	{
		j = *head;
		while ((k = j) != NULL)
		{
			j = j->next;
			free(k);
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
	size_t v = 0;
	listp_t *hptr, *n, *v;

	hptr = NULL;
	while (head != NULL)
	{
		n = malloc(sizeof(listp_t));

		if (n == NULL)
			exit(98);

		n->p = (void *)head;
		n->next = hptr;
		hptr = n;

		v = hptr;

		while (v->next != NULL)
		{
			v = v->next;
			if (head == v->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (v);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		v++;
	}

	free_listp(&hptr);
	return (v);
}
