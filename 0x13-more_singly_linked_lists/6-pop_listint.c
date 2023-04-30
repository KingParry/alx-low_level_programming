#include "lists.h"

/**
 * pop_listint - main entry
 * @head: input
 * Return: Always 0
 */
int pop_listint(listint_t **head)
{
	int z;
	listint_t *j;
	listint_t *list;

	if (*head == NULL)
		return (0);
	list = *head;

	z = list->n;

	j = list->next;

	free(list);

	*head = j;

	return (z);
}
