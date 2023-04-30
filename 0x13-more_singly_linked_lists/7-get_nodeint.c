#include "lists.h"

/**
 * get_nodeint_at_index - main function
 * @head: input
 * @index: input
 *
 * Return: Always 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int r;

	for (r = 0; r < index && head != NULL; r++)
	{
		head = head->next;
	}

	return (head);
}
