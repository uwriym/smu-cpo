#include <stdio.h>

int main(void)
{
    int n;
    int isPrime = 1;
    printf("양의 정수 입력: ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    printf((isPrime == 1) ? "It is a prime number." : "It is not a prime number.");

    return 0;
}