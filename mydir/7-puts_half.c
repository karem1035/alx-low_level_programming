#include <stdio.h>
void puts_half(char *str);


int main(void)
{
    char *str;

    str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
    puts_half(str);

    return (0);
}

void puts_half(char *str)
{
        int i = 0, half;

        while (*(str + i) != '\0')
        {
                i++;
        }
        if (i % 2 != 0)
        {
                half = (i / 2) + 1;
        }
        else
        {
                half = i / 2;
        }

        while (half < i)
        {
                printf("%c", *(str + half));

                half++;
        }

        printf("\n");
        
}