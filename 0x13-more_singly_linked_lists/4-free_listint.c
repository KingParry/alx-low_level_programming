#include "lists.h"

/**
 * free_listint - main entry
 * @head: inputs
 * Return: Always 0
 */
void free_listint(listint_t *head)
{
	listint_t *l;

	while ((l = head) != NULL)
	{
		head = head->next;
		free(l);
	}
}
