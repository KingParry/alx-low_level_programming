#include "lists.h"
/**
 * list_len -main fuction
 * @h: input
 * Return: always 0
 **/
size_t list_len(const list_t *h)
{
const list_t *r;
unsigned int s = 0;
r = h;
while (r)
{
s++;
r = r->next;
}
return (s);
}
