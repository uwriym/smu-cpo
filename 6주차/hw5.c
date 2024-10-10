#include <stdio.h>

void transform(int num)
{
    int q = num / 2; // 몫
    int r = num % 2; // 나머지

    if (q <= 1)
    {
        printf("%d", q);
        printf("%d", r);
        return;
    }
    else
    {
        transform(q);
    }
    printf("%d", r);
}

int main(void)
{
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    transform(num);

    return 0;
}