#include <iostream>

int main(){
    int number, count = 1, height, array[100] = {};
    std::cin >> number;
    for (int i = 0; i < number; i++){
        std::cin >> array[i];
    }
    std::cin >> height;

    for (int i = 0; i < number; i++){
        if (array[i] >= height){
            count += 1;
        }
    }
    std::cout << count;
}