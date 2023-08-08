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
	size_t fd;
	char *buf;
	ssize_t printed;
	ssize_t nb_read;

	buf = malloc(sizeof(char) * (letters + 1));

	fd = open(filename, O_RDONLY);
	if (!filename)
		return (0);

	nb_read = read(fd, buf, letters);
	if (nb_read == -1)
		return (0);

	printed = write(STDOUT_FILENO, buf, letters);
	if (printed == -1)
		return (0);

	close(fd);
	free(buf);

	return (printed);
}

