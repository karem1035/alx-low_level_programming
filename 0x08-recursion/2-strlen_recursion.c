#include "main.h"

int _strlen_recursion(char *s)
{
	int i = 0;
	
	while (s[i] != '\0')
	{
		i++;
	}
	
	return (i);
}
