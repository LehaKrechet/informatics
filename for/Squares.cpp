#include <iostream>

int main(){
    int number_a, number_b, help_number;
    std::cin >> number_a >> number_b;
    help_number = 1;
    for (int i=1; i <= number_b; i = i + help_number){
        if (number_a <= i){
            std::cout << i << " ";
        }

        help_number = help_number + 2;
    }
}