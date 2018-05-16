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
