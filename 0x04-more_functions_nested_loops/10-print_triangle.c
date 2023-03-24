#include "main.h"

/**
 * print_triangle - print trianfle of size.
 * @size: size of the triangle
 *
 * Description: takes sieze as parameter, thin print a triangle of its sieze.
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		int i;

		for (i = 0 ; i < size ; i++)
		{
			int j;

			for (j = 0 ; j < size ; j++)
			{
				if ((i + j) < size - 1)
				{
					printf(" ");
				}
				else
				{
					printf("#");
				}
			}

			printf("\n");
		}
	}
}
