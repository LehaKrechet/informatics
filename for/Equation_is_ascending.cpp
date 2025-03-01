#include <iostream>

int main(){
    int number_a, number_b, number_c, number_d, x = 0;
    std::cin >> number_a >> number_b >> number_c >> number_d;
    for(int i = 0; i <= 1000; i = i+1){
        if ((number_a*(x*x*x) + number_b*(x*x) + number_c*x + number_d) == 0){
            
            std::cout << x << ' ';
        }
        x = x+1;
    }
}