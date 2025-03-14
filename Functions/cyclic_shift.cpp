#include <iostream>

int* shift(int number, int count, int array[]){
    int temp = 0, i = 0;
    if (count < 0){
        count += number;
    }
    for (int j = 0; j < count; ++j){

    temp = array[number-1];
    for (int i = number-2; i >= 0; --i){
        array[i+1] = array[i];
    }
    array[0] = temp;
    }
    return array;
}

int main(){
    int number, array[100000] = {}, count;
    std::cin >> number;

    for (int i = 0; i < number; ++i){
        std::cin >> array[i];
    }
    std::cin >> count;

    int* arr = shift(number, count, array);

    for (int i = 0; i < number; ++i){
        std::cout << arr[i] << " ";
    }
}
