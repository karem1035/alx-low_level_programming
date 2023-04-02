#include <stdio.h>

void rev_string(char *s);



/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}


void rev_string(char *s)
{
        int j, i = 0;

        while (*(s + i) != '\0')
        {
                i++;
        }

        for (j = 0 ; j < i ; j++)
        {
                char tmp = *(s + j);
                
                *(s + j) = *(s + i - 1);
                *(s + i - 1) = tmp;
                i--;

        }
}