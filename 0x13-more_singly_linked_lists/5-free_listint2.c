#include "lists.h"

/**
 * free_listint2 - main entry
 * @head: input
 * Return: Always 0
 */
void free_listint2(listint_t **head)
{
	listint_t *l;
	listint_t *k;

	if (head != NULL)
	{
		k = *head;
		while ((l = k) != NULL)
		{
			k = k->next;
			free(l);
		}
		*head = NULL;
	}
}
