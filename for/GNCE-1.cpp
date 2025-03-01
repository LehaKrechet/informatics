#include <iostream>

int main(){
    int number, count = 0;
    bool flag = true;
    std::cin >> number;
    for (int i = 0; i <= number; i++){
        for (int j = 0; j < i; j ++){
            std::cout << i << " ";
            count = count + 1;
            if (count == number){
                flag = false;
                break;
            }
        }
        if (flag == false){
            break;
        }
    }
}