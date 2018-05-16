#include <iostream>
#include "calc.hpp"

int main() {
    int temp = 0;
    do{
    std::cout<<"For sumuation enter 1\nFor subtraction enter 2\nFor division enter3 \n For multiplication enter 4 \n For percentage enter5 \n For root enter 6\n For exponent enter 7\n For exit enter 0"<<\n;
    std::cin>>temp;

    switch(temp) {
    //ameqd dzer gorcoxutyan hamar greq dzer case ev function@
    case 1: 
        int num1;
        int num2;
        std :: cin >> num1 >> num2;
        std :: cout << sum(num1, num2) << "\n";
    }
    } while (temp != 0);
    
    return 0;
}
