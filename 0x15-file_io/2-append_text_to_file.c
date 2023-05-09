#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: the file name.
 * @text_content: the text to be appended.
 * Return: 1 in case of succession, -1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
	{
		return (-1);
	}
	if (text_content)
	{
		w = write(fd, text_content, strlen(text_content));
		if (w < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
