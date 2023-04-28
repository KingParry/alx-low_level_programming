#include "lists.h"
/**
 * add_node_end - main function
 * @head: Address
 * @str: Address
 * Return: Always 0
 **/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *k, *k2;
unsigned int l = 0;

if (str == NULL)
return (NULL);
k = malloc(sizeof(list_t));
if (k == NULL)
return (NULL);
k->str = strdup(str);
if (k->str == NULL)
{
free(k);
return (NULL);
}
while (str[l])
l++;
k->len = l;
k->next = NULL;
if (*head == NULL)
{
*head = k;
return (k);
}
k2 = *head;
while (k2->next)
k2 = k2->next;
k2->next = k;
return (k);
}
