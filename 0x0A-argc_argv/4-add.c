#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of arguments.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0 if success, 1 if one of the arguments is not digit.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, add = 0;
	char *letter;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1 ; i < argc ; i++)
	{
		letter = argv[i];

		while (*letter != '\0')
		{
			if (*letter < 47 || *letter > 57)
			{
				printf("Error\n");

				return (1);
			}

			letter++;

		}

		add = atoi(argv[i]);
		sum += add;
	}

	printf("%d\n", sum);

	return (0);
}
