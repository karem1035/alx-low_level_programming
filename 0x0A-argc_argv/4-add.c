#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the sum of arguments.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0 if success, 1 if one of the arguments is not digit.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (i = 1 ; i < argc ; i++)
	{
		if (atoi(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");

			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
