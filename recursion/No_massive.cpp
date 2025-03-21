#include <iostream>

void rec_revers(int number){
    if (number < 1){
        std::cout;
    }else{
        int n;
        std::cin >> n;
        rec_revers(number-1);
        std::cout << n << " ";
    }

}

int main(){
    int number;
    std::cin >> number;
    rec_revers(number);

}