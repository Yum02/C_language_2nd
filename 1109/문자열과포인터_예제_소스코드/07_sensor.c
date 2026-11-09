// 자율 주행 자동차: 함수가 포인터로 3개의 값을 돌려준다
#include <stdio.h>
#include <stdlib.h>    // rand(), srand() - PDF 정답 코드에는 빠져 있다
#include <time.h>

// 0부터 99까지의 난수(실수형태)를 발생하여 크기가 3인 배열 p에 저장한다.
void getSensorData(double *p)
{
    p[0] = rand() % 100;
    p[1] = rand() % 100;
    p[2] = rand() % 100;
    return;
}

int main(void)
{
    double sensorData[3];

    srand((unsigned)time(NULL));
    getSensorData(sensorData);
    printf("왼쪽 센서와 장애물과의 거리: %lf \n", sensorData[0]);
    printf("중간 센서와 장애물과의 거리: %lf \n", sensorData[1]);
    printf("오른쪽 센서와 장애물과의 거리: %lf \n", sensorData[2]);
    return 0;
}
