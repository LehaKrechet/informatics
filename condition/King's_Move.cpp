#include <iostream>

int main(){
    int king_x, king_y, figure_x, figure_y;
    std::cin >> king_x >> king_y >> figure_x >> figure_y;
if (abs(king_x - figure_x) <= 1 && abs(king_y - figure_y) <= 1){
        std::cout << "YES";
    }else{
        std::cout << "NO";
    }
}