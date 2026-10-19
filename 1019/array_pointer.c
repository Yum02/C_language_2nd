#include <stdio.h>

int main()
{
    int s[5], i, sum=0;
    for(i=0;i<5;i++)
    {
        printf("%d번째 학생의 성적을 넣어주세요 : ", i+1);
        scanf("%d", &s[i]);
        sum += s[i];
    }
    printf("5명의 학생 성적의 합은 %d 입니다.", sum);
    return 0;
}