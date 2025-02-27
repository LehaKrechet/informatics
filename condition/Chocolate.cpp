#include <iostream>

int main(){
    int n, m, k;
    std::cin >> n >> m >> k;
    if (n*m > k && k > 2){
        std::cout << "YES";
    }
}