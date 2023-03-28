#include "main.h"

void puts_half(char *str)
{
        int i = 0, l, j;

        while (str[i])
        {
                i++;
        }

        if (i % 2 != 0)
        {g
                l = (i - 1) / 2;
        }
        else
        {
                l = i / 2;
        }

        printf("Length of string is %d\nHalf of the length is %d\n",i , l);
        for (j = 0 ; j < l ; j++)
        {
                printf("%c", str[l + j]);
        }
        printf("\n");
}