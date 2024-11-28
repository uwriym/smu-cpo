#include <stdio.h>
#include <string.h>
#include <stdlib.h> // atoi 함수 포함

typedef struct
{
    char name[20];
    char country[20];
    int population;
} City;

int main(void)
{
    printf("Input three cities: \n");
    City cities[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Name> ");
        fgets(cities[i].name, sizeof(cities[i].name), stdin);
        cities[i].name[strcspn(cities[i].name, "\n")] = '\0'; // 개행 문자 제거

        printf("Country> ");
        fgets(cities[i].country, sizeof(cities[i].country), stdin);
        cities[i].country[strcspn(cities[i].country, "\n")] = '\0'; // 개행 문자 제거

        printf("Population> ");
        char buffer[20];
        fgets(buffer, sizeof(buffer), stdin);
        cities[i].population = atoi(buffer); // 문자열을 정수로 변환
    }

    puts("Printing the three cities: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s, %s, %d\n", i + 1, cities[i].name, cities[i].country, cities[i].population);
    }

    return 0;
}