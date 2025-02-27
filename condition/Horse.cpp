#include <iostream>

int main(){
    int horse_x, horse_y, figure_x, figure_y, x, y;
    std::cin >> horse_x >> horse_y >> figure_x >> figure_y;
    x = abs(horse_x - figure_x);
    y = abs(horse_y - figure_y);
    if ((x == 2 && y == 1) || (x == 1 && y == 2)){
        std::cout << "YES";
    }else{
        std::cout << "NO";
    }
}