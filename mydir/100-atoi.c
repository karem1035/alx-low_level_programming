#include <stdio.h>
int _atoi(char *s);


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int nb;

    nb = _atoi(" -98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}


int _atoi(char *s)
{
        int l = 0;
        int j;
        int sign = 1;
        int total = 0;

        while (*(s + l) != '\0')
        {
                l++;
        }

        for (j = 0 ; j < l ; j++)
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
                
                int num = *(s + j) - '0';
                total = total + num;
                j++;     
        }
        total *= sign;

        return (total);
        // printf("Total: %d\n", total);
        // printf("Total: %d\n", total * sign);



        //  if ()
        // {
                // printf("number\n");
        // }
}