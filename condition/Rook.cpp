#include <iostream>

int main(){
    int rook_x, rook_y, figure_x, figure_y;
    std::cin >> rook_x >> rook_y >> figure_x >> figure_y;
    if (rook_x == figure_x || rook_y == figure_y){
        std::cout << "YES";
    }else{
        std::cout << "NO";
    }
}