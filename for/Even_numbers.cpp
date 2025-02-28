#include <iostream>

int main(){
    int number_a, number_b;
    std::cin >> number_a >> number_b;
    for (int i = number_a; i <= number_b; i++){
        if (i % 2 == 0){
            std::cout << i << " ";
        }

    }
}