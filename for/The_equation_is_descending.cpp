#include <iostream>

int main(){
    int number_a, number_b, number_c, number_d;
    std::cin >> number_a >> number_b >> number_c >> number_d;
    for(int x = 1000; x >= 0; x = x-1){
        if ((number_a*(x*x*x) + number_b*(x*x) + number_c*x + number_d) == 0){
            
            std::cout << x << ' ';
        }
    }
}