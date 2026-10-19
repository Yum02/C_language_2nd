//중요한 문제
#include <stdio.h>

void SUM();

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    double avg;

    SUM(a, 5, &avg);
    printf("평균은 %.2f", avg);

    return 0;
}

void SUM(int *pa, int n, double *pavg)
{
    int sum= 0 , i;
    
    for(i=0;i<n;i++)
        sum +=*(pa+i);
    *pavg = sum/(float)n;

}