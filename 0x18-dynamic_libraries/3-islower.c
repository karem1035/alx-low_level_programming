#include "main.h"

/**
 * _islower - checks if the letter is lowercase.
 * @c: int as parameter.
 *
 * Description: compares the c number to the lower case alphabets,
 * Return: 1 if it is lowercase 0 if otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
