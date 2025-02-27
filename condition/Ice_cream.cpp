#include <iostream>

int main(){
    int sphere_icecream;
    std::cin >> sphere_icecream;
    if (((sphere_icecream % 3 == 0 || sphere_icecream % 5 == 0) && sphere_icecream < 8) || sphere_icecream >= 8){
        std::cout << "YES";
    }else{
        std::cout << "NO";
    }
}