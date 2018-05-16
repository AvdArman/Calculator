#include "calc.hpp"

int main() {
	int temp = 0;
	int num1 = 0;
	int num2 = 0;
	do{
		std::cout << "For sumuation enter 1\nFor subtraction enter 2\nFor division enter3 \n For multiplication enter 4 \n For mod enter5 \n For root enter 6\n For exponent enter 7\n For exit enter 0" << std::endl;
		std::cin >> temp;

		switch(temp) {
			case 5:
				std :: cout << "Input numbers(like this 4 8)";
				std :: cin >> num1 >> num2;
				std :: cout << mod(num1, num2);
				break;
			case 7: 
				int num = 0;
				int exponent = 0;
				std::cout << "Enter number: ";
				std::cin >> num;
				std::cout << "Enter exp: ";
				std::cin >> exponent;
				std::cout << "pow(" << num << "," << exponent << ") = " << myPow(num,exponent) << std::endl;
				break;
		}
	} while (0 != temp);

    return 0;
}
