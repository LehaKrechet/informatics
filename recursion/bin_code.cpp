#include <iostream>

void intToBinary(int n) {

    if (n == 0) {
        return;
    }
    if (n == 1) {
        std::cout << "1";
        return;
    }

    intToBinary(n / 2);
    std::cout << (n % 2 == 0 ? "0" : "1"); 
}

int main(){
    int number;
    std::cin >> number;
    if (number < 0){
        std::cout << "-";
        intToBinary(number);
    }else if (number == 0){
        std::cout << "0";
    }else{
        intToBinary(number);
    }
    
}