#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input(int* a, int n);
int get_num(int* a, int n);

int main()
{
    int s[5], result;

    input(s, 5);
    result = get_num(s, 5);

    printf("гу╟Х: %d\n", result);
    return 0;
}

int get_num(int* a, int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
    {
        sum += *(a+i);
    }
    return sum;
}

void input(int* a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", a+i);
    }
}