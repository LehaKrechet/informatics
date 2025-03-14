#include <iostream>

int main(){
    double number_x, number_y;
    std::cin >> number_x >> number_y;
    if (((number_x < 1) && (number_y > 1 - number_x)) && ((number_y > 2*number_x*number_x) || (number_y<2 && number_y < 2*number_x*number_x))){
        std::cout << "YES";
    }else{
        std::cout << "NO";
    }
}