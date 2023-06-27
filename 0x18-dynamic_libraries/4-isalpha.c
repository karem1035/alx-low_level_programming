#include "main.h"

/**
 * _isalpha - check if c is an alphabet
 * @c: int as paramter.
 *
 * Description: checks if the number is an alphabet or not
 * Return: 1 if it is an alphabet, 0 if otherwise.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
