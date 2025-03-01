

#include <iostream>

int main(){
    int number = 1, maximum = 0, count = 0;
    std::cin >> number;
    while (number != 0){
        if (number > maximum){
            maximum = number;
            count = 0;
        }
        if (number == maximum){
            count = count + 1;
        }
        std::cin >> number;
        
    };
    std::cout << count;
}