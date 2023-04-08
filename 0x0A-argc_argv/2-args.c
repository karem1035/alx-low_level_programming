#include <stdio.h>

/**
 * main - prints the arguments followed by new line.
 * @argc: number of arguments.
 * @argv: array of strings of arguments.
 *
 * Return: 0 success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
