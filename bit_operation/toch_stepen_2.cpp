#include <iostream>

int main(){
    int n;
    std::cin >>n;
    if (bool(n&(n-1))){
        std::cout << "NO";
    }else{
        std::cout << "YES";
    }


}