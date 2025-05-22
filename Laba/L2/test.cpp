#include <iostream>
#include <ctime>
#include <fstream>

int recursion_fibonaci(int n, int &c){
    c++;
    if (n==1) {
        return 1;
    } else if (n==0) {
        return 0; 
    }else{
        return recursion_fibonaci(n-1, c) + recursion_fibonaci(n-2, c);
    }
}
int main(){
    int c = 0;
    recursion_fibonaci(5, c);
    std::cout << c;
}