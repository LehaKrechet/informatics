#include <iostream>

int main(){
    int number, count = 0, elem, array[100] = {};
    std::cin >> number;
    for (int i = 0; i < number; i++){
        std::cin >> array[i];
    }
    for (int i = 0; i < number-2; i++){
        if (array[i] < array[i+1] && array[i+1] > array[i+2]){
            count += 1;
        }
    }
    std::cout << count;
}