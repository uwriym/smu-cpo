#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[50];
    int diff = 'a' - 'A';

    printf("Input> ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = 0; // null 문자 제거

    printf("Output> ");
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            printf("%c", str[i] - diff); // 대문자로 바꾸기 위하여 `diff`만큼 빼기(소문자가 더 작음)
        else if (str[i] >= 'A' && str[i] <= 'Z')
            printf("%c", str[i] + diff); // 소문자로 바꾸기 위하여 `diff`만큼 더하기(대문자가 더 큼)
        else
            printf("%c", str[i]);
    }

    return 0;
}