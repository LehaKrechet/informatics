#include <iostream>
#include <math.h>

int main(){
    double number, summa = 0 , summa_sqrt = 0, n = 0;
    std::cin >> number;
    while (number != 0){
        n += 1;
        summa += number;
        summa_sqrt += number*number;
        std::cin >> number;
    }

    std::cout << (sqrt((summa_sqrt - (summa*summa) / n) / (n-1)));
}