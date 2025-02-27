#include <iostream>

int main(){
    int side_a,side_b,side_c;
    std::cin >> side_a >> side_b >> side_c;
    if ((side_a+side_b > side_c) && (side_a+side_c > side_b) && (side_c+side_b > side_a)){
        std::cout << "YES";
    }else{
        std::cout << "NO";
    }
}