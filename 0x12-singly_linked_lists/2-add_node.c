#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - main entry
 * @head: input
 * @str: input
 * Return: always 0
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *k;
unsigned int len = 0;

while (str[len])
len++;
k = malloc(sizeof(list_t));
if (!k)
return (NULL);
k->str = strdup(str);
k->len = len;
k->next = (*head);
(*head) = k;
return (*head);
}
