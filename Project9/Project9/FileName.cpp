#include <iostream>

int gcd(int a, int b) {
    int remainder;
    do {
        remainder = a % b;
        a = b;
        b = remainder;
    } while (b != 0);
    return a;
}

int lcm(int a, int b) 
{
    return (a / gcd(a, b)) * b;
}

int main() {
    int num1, num2;

    std::cout << "첫 번째 양의 정수를 입력하세요: ";
    std::cin >> num1;
    std::cout << "두 번째 양의 정수를 입력하세요: ";
    std::cin >> num2;

    num1 = abs(num1);
    num2 = abs(num2);

    if (num1 == 0 || num2 == 0) {
        std::cout << "0이 아닌 양의 정수를 입력하세요." << std::endl;
        return 1;
    }

    int greatest_common_divisor = gcd(num1, num2);
    int least_common_multiple = lcm(num1, num2);

    std::cout << num1 << "과 " << num2 << "의 최대공약수(GCD): " << greatest_common_divisor << std::endl;
    std::cout << num1 << "과 " << num2 << "의 최소공배수(LCM): " << least_common_multiple << std::endl;

    return 0;
}