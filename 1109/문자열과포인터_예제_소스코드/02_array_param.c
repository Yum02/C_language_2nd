// 포인터와 함수의 관계: 배열 매개 변수는 원본을 바꾼다
#include <stdio.h>

void sub(int b[], int n);

int main(void)
{
    int a[3] = { 1, 2, 3 };

    printf("%d %d %d\n", a[0], a[1], a[2]);
    sub(a, 3);
    printf("%d %d %d\n", a[0], a[1], a[2]);
    return 0;
}

void sub(int b[], int n)    // int *b 와 완전히 같다
{
    b[0] = 4;
    b[1] = 5;
    b[2] = 6;
}
