#include <iostream>

int main(){
    int elephant_x, elephant_y, figure_x, figure_y;
    std::cin >> elephant_x >> elephant_y >> figure_x >> figure_y;
    if (abs(elephant_x - figure_x) == abs(elephant_y - figure_y)){
        std::cout << "YES";
    }else{
        std::cout << "NO";
    }
}