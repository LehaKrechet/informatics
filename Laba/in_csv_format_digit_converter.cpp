#include <iostream>

int main(){
    double number;
    std::cin >> number;
    int celoe = int(number);
    int drob = int((number - celoe) * 1000);
    std::cout << celoe << "," << drob;

}