#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - main entry to read
 * @filename: character filename
 * @letters: second input
 * Return: Always 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *q;
	int y;
	int x;
	int z;


	if (filename == NULL)
		return (0);

	q = malloc(sizeof(char) * letters);
	if (q == NULL)
		return (0);

	x = open(filename, O_RDONLY);
	y = read(x, q, letters);
	z = write(STDOUT_FILENO, q, y);

	if (x == -1 || y == -1 || z == -1 || z != y)
	{
		free(q);
		return (0);
	}

	free(q);
	close(x);

	return (z);
}
