// 핵심예제: 배열 요소 합 (포인터 매개 변수)
#include <stdio.h>

int get_sum(int *p, int n);

int main(void)
{
    int data[] = { 10, 20, 30, 40, 50 };
    int value;

    value = get_sum(data, 5);
    printf("%d \n", value);
    return 0;
}

int get_sum(int *p, int n)
{
    int i;
    int sum = 0;

    for (i = 0; i < n; i++)
        sum += *(p + i);    // p[i] 와 같다
    return sum;
}
