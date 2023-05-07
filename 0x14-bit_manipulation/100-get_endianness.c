#include "main.h"
/**
 * get_endianness - gets the endianness of the machine it runs on.
 * Return: 1 if big enianess 0 if little.
 */
int get_endianness(void)
{
	int i = 1;

	if (*(char *)&i)
		return (1);
	return (0);
}
