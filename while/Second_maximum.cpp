

#include <iostream>

int main(){
    int number = 1, maximum = 0, previous_maximum = 0;
    std::cin >> number;
    while (number != 0){
        if (number > maximum){
            previous_maximum = maximum;
            maximum = number;
        } else if (number > previous_maximum){
            previous_maximum = number;
        }
        std::cin >> number;
        
    };
    std::cout << previous_maximum;
}