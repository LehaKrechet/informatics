
#include <iostream>

int main(){
    double number_a, number_n, result=1.0, prom_res = 1.0;
    std::cin >> number_a >> number_n;

        for(int i = 1; i <= number_n; i++){
            prom_res *= number_a;
            result += prom_res;
        }
    std::cout << result;

}