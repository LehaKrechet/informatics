#include <iostream>

int main(){
    int number, number_n, count = 0;
    std::cin >> number;
    for (int i = 0; i < number; i++){
        std::cin >> number_n;
        if (number_n == 0){
            count = count + 1;
        }
    }
    std::cout << count;
}