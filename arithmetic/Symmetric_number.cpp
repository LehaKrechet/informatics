#include <iostream>

int main(){
    int number,number_a, number_b, number_c, number_d, result;
    std::cin >> number;
    number_a = number / 1000;
    number_b = number / 100 % 10;
    number_c = number / 10 % 10;
    number_d = number % 10;
    result = number_a == number_d && number_b == number_c;
    std::cout << result;

}