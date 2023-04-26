#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - main function
 * @s: input
 * Return: Always 0
**/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int y = 0;

while (ops[y].op != NULL)
{
if (!strcmp(ops[y].op, s))
return (ops[y].f);
y++;
}
return (NULL);
}
