#include <iostream>

int main(){
    int a,i;
    std::cin >> a >> i;
    std::cout << bool(a & (1 << i)) << std::endl;


}