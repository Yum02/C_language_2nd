#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
	char password[10];
	int i, upper, lower, digit;
	
	while (1)
	{
		printf("암호를 생성하시오 : ");
		scanf("%s", password);

		upper = lower = digit = 0;
		for (i = 0; i < strlen(password); i++)
		{
			if
				(password[i] >= 'A' && password[i] <= 'Z')
				upper=1;
			else if (password[i] >= 'a' && password[i] <= 'z')
				lower=1;
			else if (password[i] >= '0' && password[i] <= '9')
				digit=1;
		}

		if((upper == 1) && (lower == 1) && (digit == 1))
		{
			printf("암호 생성 완료\n");
			break;
		}
		else
		{
			printf("암호는 대문자, 소문자, 숫자를 모두 포함해야 합니다.\n");
		}
	}

}