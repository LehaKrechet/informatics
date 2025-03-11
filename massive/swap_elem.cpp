#include <iostream>

int main(){
    int number, count = 0, elem, array[100] = {};
    std::cin >> number;
    for (int i = 0; i < number; i++){
        std::cin >> array[i];
    }
    for (int i = 0; i < number-1; i+=2){
        array[i+1] = array[i+1] + array[i];
        array[i] = array[i+1] - array[i];
        array[i+1] = array[i+1] - array[i];
    }
    std::cout << array[0];
    for (int i = 1; i < number; i++){
        std::cout << " " << array[i];
    }
    std::cout << std::endl;

}