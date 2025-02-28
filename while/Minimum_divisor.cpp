#include <iostream>

int main(){
    int number, help_number;
    std::cin >> number;
    help_number = 2;
    while (help_number <= number){
        if (number % help_number == 0){
            std::cout << help_number;
            break;
        }
        help_number = help_number + 1;

    }
}