#include <iostream>

int main(){
    int number, count = 0, elem, array[100] = {};
    bool flag = false;
    std::cin >> number;
    for (int i = 0; i < number; i++){
        std::cin >> array[i];
    }
    for (int i = 0; i < number-1; i++){
        if ((array[i] >= 0 && array[i+1] >= 0) || (array[i] <= 0 && array[i+1] <= 0)){
            flag = true;
        }
    }
    if (flag == true){
        std::cout << "YES";
    }else{
        std::cout << "NO";
    }
}