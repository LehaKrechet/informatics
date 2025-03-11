#include <iostream>

int main(){
    int number, count = 0, start = 0, array[100] = {}, help_number;
    std::cin >> number;
    help_number = number;
    for (int i = 0; i < number; ++i){
        std::cin >> array[i];
    }
    while (start < help_number) {
        int temp = array[start];
        array[start] = array[help_number];
        array[help_number] = temp;
        start++;
        help_number--;
    }
    std::cout << array[1];
    for (int i = 2; i <= number; ++i){
        std::cout << " " << array[i];
    }
    std::cout << std::endl;
}