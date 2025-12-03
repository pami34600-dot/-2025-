#include <stdio.h>
#include <math.h>

#define SIZE 10

int main(void) {
    double data[SIZE];        
    double mean = 0.0;       
    double variance = 0.0;    
    double std_dev = 0.0;     
    double sum = 0.0;        
    int rank[SIZE];           

    printf("실수형 데이터 10개를 입력하세요:\n");

    for (int i = 0; i < SIZE; i++) {
        printf("%d번째 데이터: ", i + 1);
        ("%lf", &data[i]);
        sum += data[i];
    }

    mean = sum / SIZE;

    for (int i = 0; i < SIZE; i++) {
        variance += pow(data[i] - mean, 2);
    }
    variance /= SIZE;

    std_dev = sqrt(variance);

    for (int i = 0; i < SIZE; i++) {
        int r = 1;
        for (int j = 0; j < SIZE; j++) {
            if (data[j] > data[i])
                r++;
        }
        rank[i] = r;
    }

    printf("\n===== 결과 출력 =====\n");
    printf("입력된 데이터: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%.2lf ", data[i]);
    }

    printf("\n평균: %.4lf\n", mean);
    printf("분산: %.4lf\n", variance);
    printf("표준편차: %.4lf\n", std_dev);

    printf("\n데이터별 순위 (1 = 최고값):\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%.2lf -> %d위\n", data[i], rank[i]);
    }

    return 0;
}
