#include <iostream>

int main(){
    int number = 1, count = 0;
    while (number != 0){
        std::cin >> number;
        if (number % 2 == 0){
            count = count + 1; 
        }
        
    };
    std::cout << count-1;
}