#include <iostream>

int main(){
    double number_x, number_y;
    std::cin >> number_x >> number_y;
    if ((number_y < 2-number_x*number_x) and ((number_x >= 0 && number_y >= 0) || (number_x <= 0 && number_y >= number_x))){
        std::cout << "YES";
    }else{
        std::cout << "NO";
    }
}