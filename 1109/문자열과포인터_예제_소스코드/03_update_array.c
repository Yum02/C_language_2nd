#include <stdio.h>

void update_array(int x[])
{
    x[0] = 99;    // 원본 배열 a[0]이 바뀐다
}

int main(void)
{
    int a[] = { 10, 20, 30, 40, 50 };

    update_array(a);
    printf("a[0]=%d a[1]=%d a[2]=%d \n", a[0], a[1], a[2]);
    return 0;
}
