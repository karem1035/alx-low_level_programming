#include <stdio.h>
int _strlen(char *str);

int main(void)
{
        char *str;

        int len;        
        str = "My first strlen!";
        len = _strlen(str);
        printf("%d\n", len);
        return (0);
}


int _strlen(char *str)
{
        int i = 0;

        while (*(str+i) != '\0')
        {
                // printf("%c\n", *str);
                i++;
        }

        return (i);
}