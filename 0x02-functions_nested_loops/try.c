#include "main.h"
#include <stdio.h>

int main(void)
{
	int h1, h2, m1, m2;
	// 24:59

	int i;
	for (i = 0 ; i < 10; i++)
	{
		m1 = i;
		if (i == 10)
		{
			i = 0;
			m2++;
		}
		else if (i == 9 && m2 == 5)
		{
			break;
		}
	printf("%d%d:%d%d\n", h2, h1, m2, m1);
	}
	return (0);
}
