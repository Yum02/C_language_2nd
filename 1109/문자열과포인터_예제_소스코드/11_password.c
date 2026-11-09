// Lab: 암호 강인성 조사 (대문자, 소문자, 숫자가 모두 있는지)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    int is_upper, is_lower, is_digit;
    char password[30];

    while (1) {
        printf("암호를 생성하시오: ");
        scanf(" %s", password);
        is_upper = is_lower = is_digit = 0;

        for (i = 0; i < strlen(password); i++)
        {
            if (password[i] >= '0' && password[i] <= '9')
                is_digit = 1;
            else if (password[i] >= 'A' && password[i] <= 'Z')
                is_upper = 1;
            else if (password[i] >= 'a' && password[i] <= 'z')
                is_lower = 1;
        }

        if ((is_digit == 1) && (is_upper == 1) && (is_lower == 1))
        {
            printf("적정한 암호입니다. \n");
            break;
        }
        else
            printf("숫자, 소문자, 대문자를 섞어서 암호를 다시 만드세요!\n");
    }
    return 0;
}
