#include <iostream>

int main(){
    int queen_x, queen_y, figure_x, figure_y;
    std::cin >> queen_x >> queen_y >> figure_x >> figure_y;
    if (queen_x == figure_x || queen_y == figure_y){
        std::cout << "YES";
    }else if (abs(queen_x - figure_x) == abs(queen_y - figure_y)){
        std::cout << "YES";
    }else{
        std::cout << "NO";
    }
}