#include <iostream>
#include "calc.hpp"

int main() {
    int temp = 0;
    do{
        std::cout<<"For sumuation enter 1\nFor subtraction enter 2\nFor division enter 3\nFor multiplication enter 4\nFor percentage enter5\nFor root enter 6\nFor exponent enter 7\nFor exit enter 0\n";
        std::cin>>temp;

        switch(temp) {
            //ameqd dzer gorcoxutyan hamar greq dzer case ev function@
            case 6:
                int num = 0;
                std::cout<<"Input number";
                std::cin>>num;
                if(num >= 0) {
                    sqrtFun(num);
                } else {
                    std::cout<<"Input number is not valid";
                }
                break;
        }
    } while (temp != 0);
    return 0;
}
