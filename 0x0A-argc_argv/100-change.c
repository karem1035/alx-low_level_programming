#include <stdio.h>
#include <stdlib.h>
int count_coins(int change);

/**
 * main - start point, check argument.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 1 error, 0 success.
 */

int main(int argc, char *argv[])
{
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	if (change <= 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	printf("%d\n", count_coins(change));

	return (0);
}

/**
 * count_coins - count the coins in change.
 * @change: the change to be calculated.
 *
 * Return: coins.
 */

int count_coins(int change)
{
	int delete, coins = 0;

	while (change != 0)
	{
		if (change >= 25)
		{
			coins += change / 25;
			delete = change / 25;
			change -= delete * 25;
		}
		else if (change >= 10)
		{
			coins += change / 10;
			delete = change / 10;
			change -= delete * 10;
		}
		else if (change >= 5)
		{
			coins += change / 5;
			delete = change / 5;
			change -= delete * 5;
		}
		else if (change >= 2)
		{
			coins += change / 2;
			delete = change / 2;
			change -= delete * 2;
		}
		else if (change == 1)
		{
			coins++;
			change--;
		}
	}

	return (coins);
}
