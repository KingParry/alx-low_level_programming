#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - main function
 * @a: address
 * @n: number
 * Return: void
 */
void print_opcodes(char *a, int n)
{
int x;

for (x = 0; x < n; x++)
{
printf("%.2hhx", a[x]);
if (x < n - 1)
printf(" ");
}
printf("\n");

}

/**
 * main - main function
 * @argc: number
 * @argv: arguments
 *
 * Return: always O
 */
int main(int argc, char **argv)
{
int s;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
s = atoi(argv[1]);
if (s < 0)
{
printf("Error\n");
exit(2);
}
print_opcodes((char *)&main, s);
return (0);
}
