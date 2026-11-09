// Lab: 난수로 성적을 만들고 평균 구하기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N_DATA 10

void get_data(double data[]);
void print_data(double data[]);
double get_mean(double data[]);

int main(void)
{
    double data[20];
    double mean;

    srand((unsigned)time(NULL));
    get_data(data);
    print_data(data);
    mean = get_mean(data);
    printf("평균값은 %lf\n", mean);
    return 0;
}

void get_data(double data[])
{
    int i;
    for (i = 0; i < N_DATA; i++) {
        data[i] = rand() % 100;
    }
}

void print_data(double data[])
{
    int i;
    printf("( ");
    for (i = 0; i < N_DATA; i++) {
        printf("%.2lf ", data[i]);
    }
    printf(")\n");
}

double get_mean(double data[])
{
    int i;
    double sum = 0.0;
    for (i = 0; i < N_DATA; i++) {
        sum += data[i];
    }
    return sum / N_DATA;
}
