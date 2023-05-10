#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * main - a program that copies the content of a file to another file.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0 when it succeed.
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, r, w;
	char *buffer[1024], *file1 = argv[1], *file2 = argv[2];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	fd1 = open(file1, O_RDONLY);
	if (fd1 < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
		exit(98);
	fd2 = open(file2, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
		exit(99);
	while ((r = read(fd1, buffer, 1024)) > 0)
	{
		w = write(fd2, buffer, r);
		if (w != r)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
			exit(99);
	}
	if (r < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
		exit(98);
	if (close(fd1) < 0)
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd2);
		exit(100);
	if (close(fd2) < 0)
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd2);
		exit(100);
	return (0);
}

