#include "lists.h"

/**
 * reverse_listint - main function
 * @head: input
 * Return: Always o
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *j;
	listint_t *k;

	j = NULL;
	k = NULL;

	while (*head != NULL)
	{
		k = (*head)->next;
		(*head)->next = j;
		j = *head;
		*head = k;
	}

	*head = j;
	return (*head);
}
