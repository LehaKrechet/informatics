#include <iostream>
#include<windows.h>

int main(){

    long long n = 1;

    while (true){
        n += 1;
        for (int i = 0; i <= 10; ++i){
            n *= 10;
            std::cout << n << std::endl;
            Sleep(5);
        }
        for (int i = 0; i <= 10; ++i){
            n /= 10;
            std::cout << n << std::endl;
            Sleep(5);
        }
    }
}