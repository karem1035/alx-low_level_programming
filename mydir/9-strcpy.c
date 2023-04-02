#include <stdio.h>
char *_strcpy(char *dest, char *src);


int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}


char *_strcpy(char *dest, char *src)
{
        int i, n = 0;

        while (*(src + n) != '\0')
        {
                n++;
        }

        dest[n];
        
        for (i = 0 ; i < n ; i++)
        {
                dest[i] = src[i];
        }

        return dest;
}