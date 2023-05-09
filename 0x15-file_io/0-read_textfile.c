#include "main.h"
/**
 * read_textfile - it reads number of char from a text file.
 * @filename: the filename.
 * @letters: the number of letters to be read.
 * Return: number of chars printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int textfile;
	ssize_t toread, towrite;
	char *c;

	if (!filename)
	{
		return (0);
	}

	textfile = open(filename, O_RDONLY);

	if (textfile == -1)
	{
		return (0);
	}
	c = malloc(sizeof(char) * (letters));
	if (!c)
	{
		return (0);
	}
	toread = read(textfile, c, letters);
	towrite = write(STDOUT_FILENO, c, toread);

	close(textfile);

	free(c);

	return (towrite);
}
