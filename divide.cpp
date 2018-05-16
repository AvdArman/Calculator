#include <iostream>
#include "divade.hpp"

void divide (float num1, float num2) {
    if (0 == num2) {
    std::cout << "Division by zero!" << "\n"; 
    } else {
        std::cout << "The result of the division is: " << num1 / num2 << "\n";    
    }
}
