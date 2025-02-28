#include <iostream>

int main(){
    int number = 1, summa=0;
    while (number != 0){
        std::cin >> number;
        summa = summa + number;
    }
    std::cout << summa;
}