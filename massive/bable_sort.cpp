#include <iostream>

int main(){
    int number, count = 0, array[1000] = {};
    std::cin >> number;
    count = number+1;
    for (int i = 0; i < number; ++i){
        std::cin >> array[i];
    }
    for (int i = 0; i < number; ++i){

        for (int i = 0; i < number-1; i+=1){
            if (array[i+1] < array[i]){
            array[i+1] = array[i+1] + array[i];
            array[i] = array[i+1] - array[i];
            array[i+1] = array[i+1] - array[i];
            }
        }
        count -= 1;
    }
    std::cout << array[0];
    for (int i = 1; i < number; ++i){
        std::cout << " " << array[i];
    }
    std::cout << std::endl;

}