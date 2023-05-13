#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 *
 * @argc: input one
 * @argv: input two
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j, k;
	int l, fc, f;
	char *b[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	i = open(argv[1], O_RDONLY, 0);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	j = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (j == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((k = read(i, b, 1024)) > 0)
	{
		l = write(j, b, k);
		if (l != k)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fc = close(i);
	if (fc != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i), exit(100);
	f = close(j);
	if (f != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", j), exit(100);
	return (0);
}
