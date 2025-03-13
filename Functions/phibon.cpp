#include <iostream>

int phi(int n){
    int res = 0, previous_0 = 0, previous_1 = 1;
    if (n == 0 || n == 1){
        res = 1;
    }else{
    for (int i = 0; i < n; ++i){
        res = previous_0 + previous_1;
        previous_0 = previous_1;
        previous_1 = res;;  
    }
    }
    return res;
}

int main(){
    int n;
    std::cin >> n;
    std::cout << phi(n);
}