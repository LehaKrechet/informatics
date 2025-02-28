#include <iostream>

int main(){
    int number, power_two;
    std::cin >> number;
    power_two = 1;
    while (power_two < number){

        power_two = power_two + power_two;
    }
    if (power_two == number){
        std::cout << "YES";
    }else{
        std::cout << "NO";
    }
}