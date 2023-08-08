#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main  - program that copies file content to another
 *
 * @argc : argument count
 * @argv : argument vector
 *
 * Return: 1 on success and POSIX error codes on failure
 */
int main(int argc, char *argv[])
{
	char *file_from;
	char *file_to;
	int ffd;
	int ftd;
	char *buffer[BUF_SIZE];
	int nb_rd;
	int nb_wr;
	int ret_close;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	file_from = argv[1];
	file_to = argv[2];

	ffd = open(file_from, O_RDONLY);
	if (ffd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s",
			file_from);
		return (98);
	}

	ftd = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (ftd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", file_to);
		return (99);
	}

	nb_rd = -1;
	while (nb_rd != 0)
	{
		nb_rd = read(ffd, buffer, BUF_SIZE);
		if (nb_rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s",
				file_from);
			return (98);
		}

		nb_wr = write(ftd, buffer, nb_rd);
		if (nb_wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s",
				file_to);
			return (99);
		}
	}

	ret_close = close(ffd);
	if (ret_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", ffd);
		return (100);
	}
	ret_close = close(ftd);
	if (ret_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", ftd);
		return (100);
	}

	return EXIT_SUCCESS;
}

