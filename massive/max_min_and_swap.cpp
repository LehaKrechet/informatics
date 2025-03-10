#include <iostream>

int main(){
    int number, maximum_ind, minimum_ind, maximum, minimum,  array[100] = {};
    std::cin >> number;
    for (int i = 0; i < number; ++i){
        std::cin >> array[i];
    }
    maximum_ind = 0;
    minimum_ind = 0;
    for (int i = 0; i < number; ++i){
        if (array[maximum_ind] < array[i]){
            maximum_ind = i;
        }
        if (array[minimum_ind] > array[i]){
            minimum_ind = i;
        }
    }
    maximum = array[maximum_ind];
    minimum = array[minimum_ind];
    array[maximum_ind] = minimum;
    array[minimum_ind] = maximum;

    std::cout << array[0];
    for (int i = 1; i < number; ++i){
        std::cout << " " << array[i];
    }
    
}