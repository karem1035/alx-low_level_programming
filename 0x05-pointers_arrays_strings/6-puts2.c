#include "main.h"

void puts2(char *str)
{
	int i = 0, j;

	while(str[i])
	{
		i++;
	}
	
	for(j = 0 ; j < i ; j++)
	{
		if(i % 2 == 0 || i == 0)
		{
			printf("%c", str[i]);
		}
	}

	_putchar('\n');
}
