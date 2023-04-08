#include <stdio.h>
#include <stdlib.h>

/**
 * main - mulitblies two numbers arguments.
 * @argc: number of arguments.
 * @argv: array of arguments (char).
 *
 * Return: 1 if there is no 2 numbers. 0 if success with 2 numers.
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mul);

	return (0);
}
