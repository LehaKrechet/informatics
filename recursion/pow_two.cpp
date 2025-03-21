#include <iostream>

void pow_two(int n){
    if (n == 1){
        std::cout << "YES";
        return;
    }
    if (n <= 0 || n % 2 != 0){
        std::cout << "NO";
        return;
    }
    pow_two(n / 2);

}
int main(){
    int number;
    std::cin >> number;
    pow_two(number);
}