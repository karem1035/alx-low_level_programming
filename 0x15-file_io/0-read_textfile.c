#include "main.h"
/**
 * read_textfile - it reads number of char from a text file.
 * @filename: the filename.
 * @letters: the number of letters to be read.
 * Return: number of chars printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *c;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDWR);
	if (fd < 0)
	{
		return (0);
	}

	c = malloc(sizeof(char) * letters);
	if (!c)
	{
		close(fd);
		return (0);
	}
	r = read(fd, c, letters);
	if (r < 0)
	{
		close(fd);
		free(c);
		return (0);
	}
	w = write(STDOUT_FILENO, c, letters);
	if (w < 0)
	{
		close(fd);
		free(c);
		return (0);
	}

	close(fd);
	free(c);

	return (letters);
}
