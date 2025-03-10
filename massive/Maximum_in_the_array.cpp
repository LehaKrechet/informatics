#include <iostream>

int main(){
    int number, maximum_ind, array[35] = {};
    std::cin >> number;
    for (int i = 0; i < number; ++i){
        std::cin >> array[i];
    }
    maximum_ind = 0;
    for (int i = 0; i < number; ++i){
        if (array[maximum_ind] < array[i]){
            maximum_ind = i;
        }
    }
    std::cout << array[maximum_ind];
}