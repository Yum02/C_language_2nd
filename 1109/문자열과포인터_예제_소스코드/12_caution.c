// 주의할 점: 올바른 방법으로 고친 코드
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[20];
    char *ps;
    char buf[20];

    // s = "hello world";       // 오류! 배열 이름에는 대입할 수 없다
    strcpy(s, "hello world");   // 배열에는 strcpy로 복사한다
    printf("%s\n", s);

    ps = "hello world";         // OK: 포인터는 문자열 상수를 가리킬 수 있다
    printf("%s\n", ps);

    // char *t; scanf("%s", t); // 위험! t는 아무 곳도 가리키지 않는다
    printf("단어 입력: ");
    scanf("%19s", buf);         // 입력은 공간이 있는 배열에 받는다
    printf("입력한 단어: %s\n", buf);
    return 0;
}
