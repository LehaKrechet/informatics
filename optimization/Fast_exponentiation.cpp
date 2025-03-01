#include <iostream>
#include <cmath>
int main(){
    int n;
    double a, result=1.0;
    std::cin >> a >> n;
    while (n > 0){
        if (n % 2 == 1){
            result *= a;
        }
            a *= a;
            n /= 2;
    }
    std::cout << result;

    
}