#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 100
#define RANGE_SIZE 10

void generate_random(int* arr, int n, int min, int max);
void print_array(int* arr, int n);
void calc_stats(int* arr, int start, int count,
    double* sum, double* var, double* std);

int main(void) {
    int arr[N];
    int min, max;
    int start;
    double sum, var, std;

    srand((unsigned int)time(NULL));

    printf("난수 최소값, 최대값을 입력하세요: ");
    scanf_s("%d %d", &min, &max);

    generate_random(arr, N, min, max);
    print_array(arr, N);

    printf("합/분산/표준편차를 구할 구간 시작 인덱스(0~%d): ", N - RANGE_SIZE);
    scanf_s("%d", &start);

    calc_stats(arr, start, RANGE_SIZE, &sum, &var, &std);

    printf("선택 구간 합: %.2f\n", sum);
    printf("선택 구간 분산: %.4f\n", var);
    printf("선택 구간 표준편차: %.4f\n", std);

    return 0;
}

void generate_random(int* arr, int n, int min, int max) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % (max - min + 1) + min;
    }
}

void print_array(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));  // 포인터 연산 사용
    }
    printf("\n");
}

void calc_stats(int* arr, int start, int count,
    double* sum, double* var, double* std) {
    double mean = 0.0;
    *sum = 0.0;

    for (int i = 0; i < count; i++) {
        *sum += arr[start + i];
    }
    mean = *sum / count;

    *var = 0.0;
    for (int i = 0; i < count; i++) {
        double diff = arr[start + i] - mean;
        *var += diff * diff;
    }
    *var /= count;
    *std = sqrt(*var);
}