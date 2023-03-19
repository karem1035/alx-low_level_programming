#include <stdio.h>

/**
 * main - a function prints the of the types.
 * @void: takes no parameters.
 *
 * Description: using the sizeof function,
 * we get and print the size of the different types.
 * Return: 0.
 */

int main(void)
{o
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long));
	printf("Size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}

