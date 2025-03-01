#include <iostream>

int main(){
    int number, count=0;
    std::cin >> number;
    for(int j=1;j*j<=number;j++){
        if(number%j==0){
            count += 1;
            if(j!=(number/j))
                count += 1;
        }
    }
    std::cout << count;
}