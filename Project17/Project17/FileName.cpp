#include <stdio.h>

struct SData {
    int num;
    double grade;
};

union UData {
    int num;
    double grade;
};

int main(void) {
    struct SData s;
    union UData u;

    printf("=== 구조체(struct) ===\n");
    s.num = 315;
    s.grade = 4.4;   
    printf("s.num = %d\n", s.num);
    printf("s.grade = %.1f\n", s.grade);

    printf("\n=== 공용체(union) ===\n");
    u.num = 315;     
    printf("u.num 저장 후 u.num = %d, u.grade = %lf\n", u.num, u.grade);

    u.grade = 4.4;  
    printf("u.grade 저장 후 u.num = %d, u.grade = %lf\n", u.num, u.grade);

    printf("\n구조체 크기: %lu 바이트\n", sizeof(struct SData));
    printf("공용체 크기: %lu 바이트\n", sizeof(union UData));

    return 0;
}
