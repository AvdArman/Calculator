#include "calc.hpp"

int mod(int num1, int num2) {
    return num1 % num2;
}

int div(float num1, float num2) {
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
