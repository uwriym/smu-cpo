#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
            printf(" ");
        for (int k = 1; k <= 2 * i - 1; k += 1)
            printf("*");
        printf("\n");
    }
    return 0;
}