#include <iostream>


int main(){
    int n;
    bool res;
    std::cin >> n;
    for (int j = 0; j < (1<<n);j++){
        for (int i = n-1; i>=0;i--){
            res = bool(j & (1 << i));
            std::cout << res;;
        }
        std::cout << std::endl;
}

}