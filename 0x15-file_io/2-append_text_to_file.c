#include "main.h"
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

/**
 * append_text_to_file - append text to file
 *
 * @filename: filename
 * @text_content: text content
 *
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int written;

	if (!filename)
	{
		return (-1);
	}

	if (!text_content)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	written = write(fd, text_content, strlen(text_content));
	if (written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

