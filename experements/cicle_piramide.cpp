#include <iostream>
#include<windows.h>

int main(){

    long long n = 1, a = 1;
    for (int i = 0; i <= 10; ++i){
        a *= 10;
    }

    while (true){
        n += 1;
        for (int i = 0; i <= 6; ++i){
            n *= 10;
            std::cout << n << "              ";
            a /= 10;
            std::cout << a;
            n *= 10;
            std::cout << n << "              ";
            a /= 10;
            std::cout << a <<  std::endl;

            Sleep(5);
        }
        a += 1;
        for (int i = 0; i <= 6; ++i){
            n /= 10;
            std::cout << n << "              ";
            a *= 10;
            std::cout << a;
            n /= 10;
            std::cout << n << "              ";
            a *= 10;
            std::cout << a <<  std::endl;


            Sleep(5);
        }
    }
}