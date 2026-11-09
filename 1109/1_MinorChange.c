#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s[10] = "hello";
	char* p = "hello";

	s[0] = "y";
	// p[0] = "y"; 포인터는 부분 변경이 안됨

	p = "world";
	//s = "world"; 배열은 전체 변경이 안됨

	printf("배열 초기화 : %s\n", s);
	printf("포인터 초기화 : %s\n", p);

	scanf("%s", s); //배열은 입력 가능, 포인터는 입력 불가
	printf("배열 변경 : %s\n", s); //포인터는 입력 불가, 배열은 입력 가능

	return 0;
}