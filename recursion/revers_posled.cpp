#include <iostream>

void rec_revers(){
    int n;
    std::cin >> n;
    if (n != 0){
    rec_revers();
    std::cout << n << " ";
}

}

int main(){
    rec_revers();

}