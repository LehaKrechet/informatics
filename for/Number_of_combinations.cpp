#include <iostream>

int main(){
    int number_n, number_k, fact_n=1, fact_k=1, fact_n_k=1, result;
    std::cin >> number_n >> number_k;
    for (int i = 1; i <= number_n; i++){
        fact_n = fact_n * i;
    }
    for (int i = 1; i <= number_k; i++){
        fact_k = fact_k * i;
    }
    for (int i = 1; i <= (number_n-number_k); i++){
        fact_n_k = fact_n_k * i;
    }
    result = fact_n / (fact_k * fact_n_k);
    std::cout << result;
}