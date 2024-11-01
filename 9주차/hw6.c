#include <stdio.h>

int main(void)
{
    int nums[5];

    printf("Please input five integers: ");
    scanf("%d %d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4]);

    int evenSize = 0, oddSize = 0;

    for (int i = 0; i < 5; i++)
    {
        if (nums[i] % 2 == 0)
            evenSize += 1;
        else
            oddSize += 1;
    }

    int odd[oddSize];
    int even[evenSize];
    int oddIndex = 0;
    int evenIndex = 0;

    for (int i = 0; i < 5; i++)
    {
        if (nums[i] % 2 == 0)
        {
            even[evenIndex] = nums[i];
            evenIndex += 1;
        }
        else
        {
            odd[oddIndex] = nums[i];
            oddIndex += 1;
        }
    }

    printf("Odd numbers: ");
    for (int i = 0; i < oddIndex; i++)
        printf("%d ", odd[i]);

    printf("\n");
    printf("Even numbers: ");

    for (int i = 0; i < evenIndex; i++)
        printf("%d ", even[i]);

    return 0;
}