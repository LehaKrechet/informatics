#include <iostream>

int main(){
    int number, number_n, summa = 0;
    std::cin >> number;
    for (int i = 0; i < number; i++){
        std::cin >> number_n;
        summa = summa + number_n;
    }
    std::cout << summa;
}