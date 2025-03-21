#include <iostream>
void gcd(int a, int b){
    if (b == 0){
        std::cout << a;
    }else if (b > 0){
        gcd(b, a % b);
    }

}

int main(){
    int a,b;
    std::cin >> a >> b;
    gcd(a,b);

}