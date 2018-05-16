#include "calc.hpp"

void sqrtFun(int num) {
    std::cout<<sqrt(num);
}

void min(int num1, int num2) {
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> num1 >> num2;
    std::cout << num1 << " minus " << num2 << " is:" << std::endl;
    std::cout << num1-num2 << std::endl;
}

int mod(int num1, int num2) {
    if (0 == num2) {
        return 0;
    }
    return num1 % num2;
}

float div(float num1, float num2) {
    if (0 == num2) {
        std::cout << "Division by zero!" << "\n";
        return -1;
    } else {
        std::cout << "The result of the division is: " << num1 / num2 << "\n";    
        return num1 / num2;
    }
}

int myPow(int number, int exponent) {
    if (0 == number && 0 == exponent) {
        std::cout << "\n---Invaled calculation!---\n" << std::endl;
        return 0;
    }
    if (0 == exponent) {
        return 1;
    }
    if (0 == number) {
        return 0;
    }
    int sum = 1;
    if (0 < exponent) {
        for (int i = 1; i <= number; ++i) {
            sum *= number;
        }
        return sum;
    } else {
        for (int i = 1; i <= number; ++i) {
            sum /= number;
        }
        return sum;
    }
}

int sum(int num1, int num2) {
    return num1 + num2;
}
