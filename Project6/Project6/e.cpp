#include <iostream>

int gcd(int a, int b) {
    int original_a = a;
    int original_b = b;

    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    std::cout << "첫 번째 양의 정수를 입력하세요: ";
    std::cin >> num1;
    std::cout << "두 번째 양의 정수를 입력하세요: ";
    std::cin >> num2;

    int greatest_common_divisor = gcd(num1, num2);
    int least_common_multiple = lcm(num1, num2);

    std::cout << num1 << "과 " << num2 << "의 최대공약수(GCD): " << greatest_common_divisor << std::endl;
    std::cout << num1 << "과 " << num2 << "의 최소공배수(LCM): " << least_common_multiple << std::endl;

    return 0;
}