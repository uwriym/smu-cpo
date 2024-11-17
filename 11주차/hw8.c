#include <stdio.h>
#include <math.h>

void stdev(int *param)
{
    double allAdd = 0, allPowMean = 0;
    for (int i = 0; i < 5; i++)
        allAdd += param[i];

    double mean = allAdd / 5;

    for (int i = 0; i < 5; i++)
        allPowMean += pow((param[i] - mean), 2);

    double stdevResult = sqrt(allPowMean / 5);

    printf("Standard Deviation = %.3f \n", stdevResult);
}

int main(void)
{
    int nums[5];

    printf("Enter 5 real numbers: ");
    scanf("%d %d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4]);

    stdev(nums);

    return 0;
}