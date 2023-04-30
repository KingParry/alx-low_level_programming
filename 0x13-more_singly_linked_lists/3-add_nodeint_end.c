#include "lists.h"

/**
 * add_nodeint_end - main entry
 * @head: input
 * @n: input
 * Return: Always 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *o;

	(void)o;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = NULL;
	o = *head;

	if (o == NULL)
	{
		*head = p;
	}
	else
	{
		while (o->next != NULL)
			o = o->next;
		o->next = p;
	}

	return (*head);
}
