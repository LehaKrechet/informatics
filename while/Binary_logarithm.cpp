#include <iostream>

int main(){
    int number, help_name, power_two, count=0;
    std::cin >> number;
    power_two = 1;
    while(power_two < number){
        power_two = power_two + power_two;
        count = count + 1;
    }
    std::cout << count;
}