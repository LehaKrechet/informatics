#include <iostream>

int main(){
    int number, summa;
    summa = 0;
    for (int i = 0; i < 100; i++){
        std::cin >> number;
        summa = summa + number;
    }
    std::cout << summa;
}