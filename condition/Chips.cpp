#include <iostream>

int main(){
    double number;
    std::cin >> number;
    if ((((number + 4)/4 == int((number + 4)/4)) && number > 0) || number == 1){
        std::cout << "YES";
    }else{
        std::cout << "NO";
    }
}
