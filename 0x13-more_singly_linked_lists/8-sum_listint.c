#include "lists.h"

/**
 * sum_listint - main entry
 * @head: head
 * Return: Always 0
 */
int sum_listint(listint_t *head)
{
	int r = 0;

	while (head != NULL)
	{
		r += head->n;
		head = head->next;
	}

	return (r);
}
