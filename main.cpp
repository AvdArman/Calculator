#include "calc.hpp"

int main() {
    int temp = 0;
    do {
    	std::cout << "For sumuation enter 1\nFor subtraction enter 2\nFor division enter3 \n For multiplication enter 4 \n For percentage enter5 \n For root enter 6\n For exponent enter 7\n For exit enter 0"<<\n;
		std::cin >> temp;

		switch(temp) {
			case 2:
				min(num1, num2); 
			case 7: 
				int num = 0;
				int exp = 0;
				std::cout << "Enter number: ";
				std::cin >> num;
				std::cout << "Enter exp: ";
				std::cin >> exp;
				std::cout << "pow(" << num << "," << exp << ") = " << myPow(num, exp) << std::endl;
			//ameqd dzer gorcoxutyan hamar greq dzer case ev function@
		}
    } while (0 != temp);
    
    return 0;
}
