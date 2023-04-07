#include "main.h"
int _strlen(char *s, int n);
int strmp(char *s, int start, int end);

/**
 * is_palindrome - checks if string is plaindrome or not.
 * @s: the string.
 *
 * Return: 1 if it is, 0 if not.
 */

int is_palindrome(char *s)
{
	int n, start;

	n = 0;

	start = 0;

	return (strmp(s, start, _strlen(s, n)));
}

/**
 * _strlen - gets the length of a string.
 * @s: the string.
 * @n: the starting point.
 *
 * Return: n the length of it.
 */

int _strlen(char *s, int n)
{
	if (*(s + n) != '\0')
	{
		return (_strlen(s, n + 1));
	}
	else
	{
		return (n);
	}
}

/**
 * strmp - compare the first and final letter.
 * @s: the string.
 * @start: the starting letters.
 * @end: the ending letters.
 *
 * Return: 1 or 0 if it is plaindrome or not.
 */

int strmp(char *s, int start, int end)
{
	if (start <= end)
	{
		if (*(s + start) == *(s + end - 1))
		{
			return (strmp(s, start + 1, end - 1));
		}
		else
		{
			return (0);
		}
	}

	return (1);
}
