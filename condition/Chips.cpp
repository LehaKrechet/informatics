#include <iostream>

int main(){
    int number;
    std::cin >> number;
    if ((number == 1) || (number != 0 && number % 4 == 0)){
        std::cout << "YES";
    }else{
        std::cout << "NO";
    }
}
