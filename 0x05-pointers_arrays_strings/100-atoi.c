#include "main.h"

/**
 * _atoi - converts
 * @s: the input string
 *
 * Return: total the resulting string.
int _atoi(char *s)
{
	int j, num, sign = 1;
	int total = 0;

	for (j = 0 ; *(s + j) != '\0' ; j++)
	{
		if (*(s + j) == '-' || *(s + j) == '+')
		{
			if (*(s + j) == '-')
			{
			sign = sign * -1;
			}
		}
		else if (*(s + j) >= '0' && *(s + j) <= '9')
		{
		break;
		}
	}
	while (*(s + j) >= '0' && *(s + j) <= '9')
	{
		if (total > 0)
		{
			total *= 10;
		}
		num = *(s + j) - '0';
		total = total + num;
		j++;
	}
	total *= sign;
	return (total);
}
*/

int _atoi(char *s)
{
        int j , num, sign = 1;
        int total = 0;

        for (j = 0 ; *(s + j) != '\0' ; j++)
        {
                if (*(s + j) == '-' || *(s + j) == '+')
                {
                        if (*(s + j) == '-')
                        {
                                sign = sign * -1;
                        }
                }
             
                else if (*(s + j) >= '0' && *(s + j) <= '9')
                {
                        break;
                }
        }

        while (*(s + j) >= '0' && *(s + j) <= '9')
        {
                if (total > 0)
                {
                        total *= 10;
                }
                
                num = *(s + j) - '0';
                total = total + num;
                j++;     
        }
	if (sign == -1)
	{
		total = 0 - total;
	}

        return (total);
}

