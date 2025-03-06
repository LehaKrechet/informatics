#include <iostream>

int main(){
    int number_n, number_k, result = 1;
    std::cin >> number_n >> number_k;
    if (number_k > number_n/2){
        number_k = number_n - number_k;
    }
    if (number_k == 1){
        result = number_n;
    }else if (number_k == 0){
        result = 1;
    }else{
        for (int i = 1; i <= number_k; ++i){
            result *= number_n-number_k+i;
            result /= i;
        }
    }
    std::cout << result;
}