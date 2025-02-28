#include <iostream>

int main(){
    double number_x, number_y;
    int count = 1;
    std::cin >> number_x >>number_y;
    if (number_x == number_y){
        std::cout << count;
    }else if (number_x != 0){
        while (number_x < number_y){
            number_x = number_x * 1.1;
            count = count + 1;
        }
        std::cout << count;
    }

}