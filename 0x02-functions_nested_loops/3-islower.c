#include "main.h"

/**
 * _isalpha - start point
 * @c: takes an int as parameter.
 *
 * Description: checks if the letter is lowercase of now.
 * Return: 1 if it is lowercase, 0 if otherwise.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
