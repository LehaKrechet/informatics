#include <iostream>

int main(){
    double n;
    n = 1.0;
    while (n < 30000){
        n = n + 1;
        if (((n + 4)/4 == int((n + 4)/4))){
            std::cout << n << " " << (n + 4)/4 << std::endl;
        }
        
    }

    
}