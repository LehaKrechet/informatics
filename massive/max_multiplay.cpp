#include <iostream>

int main(){
    int number, array[100000] = {}, maximum_ind, second_maximum_ind, minimum_ind, second_minimum_ind;
    std::cin >> number;
    for (int i = 0; i < number; ++i){
        std::cin >> array[i];
    }
    maximum_ind = second_maximum_ind = minimum_ind = second_minimum_ind = 0;
    for (int i = 0; i < number; ++i){
        if (array[maximum_ind] < array[i]){
            maximum_ind = i;
        }
        if (array[minimum_ind] > array[i]){
            minimum_ind = i;
        }
    }
    for (int i = 0; i < number; ++i){
        if (array[second_maximum_ind] < array[i] && i != maximum_ind){
            second_maximum_ind = i;
        }
        if ((array[second_minimum_ind] > array[i] && i != minimum_ind) || (array[second_minimum_ind] == array[minimum_ind])){
            second_minimum_ind = i;
        }
    }
    if (array[maximum_ind] * array[second_maximum_ind] > array[minimum_ind]*array[second_minimum_ind]){
        std::cout << array[second_maximum_ind] << " " << array[maximum_ind] << std::endl;
    }else{
        std::cout << array[minimum_ind] << " " << array[second_minimum_ind] << std::endl;
    }

}