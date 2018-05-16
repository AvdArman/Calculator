#include "calc.hpp"

int main() {
    int temp = 0;
    int num1 = 0;
    int num2 = 0;
    do{
        std::cout<<"For sumuation enter 1\nFor subtraction enter 2\nFor division enter3 \nFor multiplication enter 4 \nFor mod enter5 \nFor root enter 6\nFor exponent enter 7\nFor exit enter 0\n";
        std::cin>>temp;
	switch(temp) {
            case 1:
                std :: cout << "Input numbers(like this 4 8)";
                std :: cin >> num1 >> num2;
                std :: cout << sum(num1, num2) << "\n";
                break;
	    case 2:
		min(num1, num2);
		break; 
            case 3:
                std::cout << "Input numbers";
                float num1 = 0;
                float num2 = 0;
                std::cin >> num1 >> num2;
                std::cout << div(num1,num2) << "\n";
                break;
            case 5:
                std :: cout << "Input numbers(like this 4 8)";
                std :: cin >> num1 >> num2;
                std :: cout << mod(num1, num2);
                break;
            case 6:
                std::cout<<"Input number";
                std::cin>>num1;
                if(num >= 0) {
                    sqrtFun(num1);
                } else {
                    std::cout<<"Input number is not valid";
                }
                break;
			case 7: 
				int num = 0;
				int exponent = 0;
				std::cout << "Enter number: ";
				std::cin >> num;
				std::cout << "Enter exp: ";
				std::cin >> exponent;
				std::cout << "pow(" << num << "," << exponent << ") = " << myPow(num,exponent) << std::endl;
        }
    } while (0 != temp);
    return 0;
}
