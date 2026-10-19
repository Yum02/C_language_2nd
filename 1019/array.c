#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int s[5], i;
    printf("정수 5개를 입력 : ");
    for(i=0;i<5;i++)
        scanf("%d", &s[i]);
    for(i=0;i<5;i++)
        printf("%d\n", s[i]);
	return 0;
}