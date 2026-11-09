// (보충) 문자열은 char 배열 + 끝의 NULL 문자('\0')
#include <stdio.h>

int main(void)
{
    char str[10] = "seoul";    // s e o u l \0 \0 \0 \0 \0
    int i;

    for (i = 0; str[i] != '\0'; i++)    // '\0'을 만나면 문자열 끝
        printf("str[%d] = '%c'\n", i, str[i]);
    printf("문자열: %s (길이 %d)\n", str, i);
    return 0;
}
