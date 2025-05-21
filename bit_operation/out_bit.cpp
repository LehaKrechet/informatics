#include <iostream>

int main(){
    int a;
    bool res;
    std::cin >> a;
    for (int i = 7; i>=0;i--){
        res = bool(a & (1 << i));
        std::cout << res;;
    }
    std::cout << std::endl;


}