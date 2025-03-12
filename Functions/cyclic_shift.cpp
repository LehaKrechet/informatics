#include <iostream>

int main(){
    int number, array[100] = {}, temp, count;
    std::cin >> number >> count;
    for (int i = 0; i < number; ++i){
        std::cin >> array[i];
    }

    
    if (count < 0){
        count += number;
    }
    for (int j = 0; j < count; ++j){

    temp = array[number-1];
    for (int i = number; i > 0; --i){
        array[i] = array[i-1];
    }
    array[0] = temp;
    }


    for (int i = 0; i < number; ++i){
        std::cout << array[i] << " ";
    }

}