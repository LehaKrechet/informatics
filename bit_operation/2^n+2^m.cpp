#include <iostream>

int main(){
    int n,m;
    std::cin >> n >> m;
    std::cout << ((1<<n) | (1<<m)) << std::endl;
}