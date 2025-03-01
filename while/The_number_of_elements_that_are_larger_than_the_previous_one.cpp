#include <iostream>

int main(){
    int number = 1, previous_number, count = 0;
    while (number != 0){
        std::cin >> number;
        if (number > previous_number){
            count = count + 1; 
        }
        previous_number = number;
        
    };
    std::cout << count-1;
}