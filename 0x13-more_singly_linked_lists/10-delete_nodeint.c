#include "lists.h"

/**
 * delete_nodeint_at_index - main function
 * @head: input
 * @index: input
 * Return: Always 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int s;
	listint_t *j;
	listint_t *k;

	j = *head;

	if (index != 0)
	{
		for (s = 0; s < index - 1 && j != NULL; s++)
		{
			j = j->k;
		}
	}

	if (j == NULL || (j->k == NULL && index != 0))
	{
		return (-1);
	}

	k = j->k;

	if (index != 0)
	{
		j->k = k->k;
		free(k);
	}
	else
	{
		free(j);
		*head = k;
	}

	return (1);
}
