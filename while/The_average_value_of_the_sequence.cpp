#include <iostream>

int main(){
    int number = 1,summa = 0, count = 0;
    double result= 0.0;
    while (number != 0){
        std::cin >> number;
        summa = summa + number;
        count = count + 1; 
    }
    result = double(summa) / (count-1);
    std::cout << result;
}