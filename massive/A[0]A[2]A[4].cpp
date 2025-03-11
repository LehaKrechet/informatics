#include <iostream>

int main(){
    int number_n;
    int array[100] = {};
    std::cin >> number_n;
    for (int i = 0; i < number_n; i++){
        std::cin >> array[i];
    }
    for (int i = 0; i < number_n; i += 2){
        std::cout << array[i] << " ";
    }
    
}