#include "calc.hpp"

float min(num1, num2) {
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> num1 >> num2;
    std::cout << num1 << " minus " << num2 << " is:" << std::endl;
    std::cout << num1-num2 << std::endl;
}
~  
int mod(int num1, int num2) {
	return num1 % num2;
}

int myPow(int number, int exp) {
    if (0 == number && 0 == exp) {
        std::cout << "\n---Invaled calculation!---\n" << std::endl;
        return 0;
    }
    if (0 == exp) {
        return 1;
    }
    if (0 == number) {
        return 0;
    }
    int sum = 1;
    if (0 < exp) {
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
