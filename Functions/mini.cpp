#include <iostream>

int min(int number_a, int number_b, int number_c, int number_d){
    int mini = number_a;
    if (number_b < mini){
        mini = number_b;
    }
    if (number_c < mini){
        mini = number_c;
    }
    if (number_d < mini){
        mini = number_d;
    }
    return mini;
}

int main(){
    int number_a, number_b, number_c, number_d;
    std::cin >> number_a >> number_b >> number_c >> number_d;
    std::cout << min(number_a, number_b, number_c, number_d);

}