#include <iostream>

int main(){
    int number, help_name, power_two;
    std::cin >> number;
    power_two = 1;
    while(power_two <= number){
        std::cout << power_two << " ";
        power_two = power_two + power_two;
    }

}