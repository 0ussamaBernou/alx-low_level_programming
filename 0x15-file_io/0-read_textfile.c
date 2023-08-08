#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read and print letters from file
 *
 * @filename: the filename
 * @letters: number of letters to read and print
 *
 * Return: numbers of chars printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buf;
	ssize_t printed;
	ssize_t nb_read;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	nb_read = read(fd, buf, letters);
	if (nb_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	printed = write(STDOUT_FILENO, buf, nb_read);
	if (printed == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	if (printed != nb_read)
	{
		free(buf);
		close(fd);
		return (0);
	}

	close(fd);
	free(buf);

	return (printed);
}

