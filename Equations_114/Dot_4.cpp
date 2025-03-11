#include <iostream>

int main(){
    double number_x, number_y;
    std::cin >> number_x >> number_y;

    if ((number_y >= number_x*number_x - 2) && (number_y <= -number_x || number_y <= number_x)){
        std::cout << "YES";
    }else{
        std::cout << "NO";
    }
}