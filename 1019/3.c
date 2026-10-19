#include <stdio.h>
void add(int *p, int *pc);


int main()
{
    int a[2] = {10, 20}, c;
    add(a, &c);
    printf("%d", c);


    return 0;
}

void add(int *p, int *pc)
{
    *pc =  *p + *(p+1);
}