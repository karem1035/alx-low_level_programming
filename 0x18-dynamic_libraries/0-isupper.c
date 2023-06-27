#include "main.h"

/**
 * _isupper - checks if the char is upper
 * @c: integer parameter
 *
 * Description: Checks is the char is upper or not, and return.
 * value based on this.
 * Return: 1 if upper 0 is lower.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
