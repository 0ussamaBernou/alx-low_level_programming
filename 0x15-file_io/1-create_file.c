#include "main.h"
#include <string.h>

/**
 * create_file - create a file
 * @filename: the filename
 * @text_content: text content
 *
 * Return: 1 on success -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int written;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_TRUNC | O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	written = write(fd, text_content, strlen(text_content));

	if (written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}

