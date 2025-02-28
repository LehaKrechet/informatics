#include <iostream>

int main(){
    int number = 1, count;
    while (number != 0){
        std::cin >> number;
        count = count + 1;
    }
    std::cout << count-1;
}