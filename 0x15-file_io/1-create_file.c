#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: the file name.
 * @text_content: content to be written on the file.
 * Return: 1 when it succed otherwise -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len;

	len = strlen(text_content);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd < 0 || filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		return (-1);

	}
	w = write(fd, text_content, len);
	if (w < 0)
		return (-1);

	close(fd);
	return (1);
}
