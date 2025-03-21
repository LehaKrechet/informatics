#include <iostream>

int phibon(int number){
    if (number == 0){
        return 0;
    }else if (number <= 2){
        return 1;
    }else{
        return phibon(number-1) + phibon(number-2);
    }

}

int main(){
    int number;
    std::cin >> number;
    std::cout << phibon(number);
}