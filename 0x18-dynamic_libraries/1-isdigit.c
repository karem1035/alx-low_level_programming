#include "main.h"

/**
 * _isdigit - check is the parameter is digit.
 * @c: the input to be checked.
 *
 * Description: takes parameter c as input and check is it is,
 * Digit or not.
 * Return: 1 if digit 0 if otherwise.
 */

int _isdigit(int c)
{
	if ((c >= 0 && c <= 9) || (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
