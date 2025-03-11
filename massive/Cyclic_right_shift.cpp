#include <iostream>

int main(){
    int number, count = 0, elem, array[100] = {}, help_number;
    std::cin >> number;
    help_number = number + 1;
    for (int i = 0; i < number; ++i){
        std::cin >> array[i];
    }
    array[number] = array[number-1];
    for (int i = 0; i < number-1; ++i){
        array[help_number] = array[i];
        help_number += 1;
    }
    help_number = 0;
    for (int i = number; i < number+number+1; ++i){
        array[help_number] = array[i];
        array[i] = 0;
        help_number += 1;
    }
    for (int i = 0; i < number; ++i){
        std::cout << array[i] << " ";
    }
}