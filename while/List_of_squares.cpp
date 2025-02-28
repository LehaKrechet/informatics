#include <iostream>

int main(){
    int number, help_name, help_name_2;
    help_name = 1;
    help_name_2 = 3;
    std::cin >> number;
    while (help_name <= number){
        std::cout << help_name << std::endl;
        help_name = help_name + help_name_2;
        help_name_2 = help_name_2 + 2;
    }
}