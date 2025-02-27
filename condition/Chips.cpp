#include <iostream>

int main(){
    double number;
    std::cin >> number;
    if ((number + 4)/4 == int((number + 4)/4)){
        std::cout << "YES";
    }else{
        std::cout << "NO";
    }
}