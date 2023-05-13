#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - main function.
 * @filename: Char pointer input
 * @text_content: input
 * Return: Always 0
 */
int create_file(const char *filename, char *text_content)
{
	int i;
	int j;
	int l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(i, text_content, l);

	if (i == -1 || j == -1)
		return (-1);

	close(i);

	return (1);
}
