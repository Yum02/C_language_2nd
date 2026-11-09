// (보충) 문자열 상수와 포인터
#include <stdio.h>

int main(void)
{
    char *p = "HelloWorld";    // p는 텍스트 세그먼트의 문자열 상수를 가리킨다
    char s[] = "HelloWorld";   // s는 문자열을 복사해 둔 배열이라 수정 가능

    printf("%s\n", p);

    // p[0] = 'A';             // 오류! 문자열 상수는 바꿀 수 없다 (실행 중 오류)
    p = "Goodbye";             // OK: 포인터가 다른 문자열을 가리키게 하는 것은 가능
    printf("%s\n", p);

    s[0] = 'A';                // OK: 배열은 수정 가능
    printf("%s\n", s);
    return 0;
}
