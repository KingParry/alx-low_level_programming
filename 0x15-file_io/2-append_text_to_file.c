#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - main entry
 * @filename: input filename
 * @text_content: Second input
 * Return: Always 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int m, t, n = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (n = 0; text_content[n];)
			n++;
	}

	m = open(filename, O_WRONLY | O_APPEND);
	t = write(m, text_content, n);

	if (m == -1 || t == -1)
		return (-1);

	close(m);

	return (1);
}
