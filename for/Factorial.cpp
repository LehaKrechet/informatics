#include <iostream>

int main(){
    int number, fact=1;
    std::cin >> number;
    for (int i = 1; i <= number; i++){
        fact = fact * i;
    }
    std::cout << fact;
}