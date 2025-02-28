#include <iostream>

int main(){
    int contribution, summa;
    int count = 0;
    double procent;
    std::cin >> contribution >> procent >> summa;
    contribution = contribution * 100;
    summa = summa * 100;
    if (contribution == summa){
        std::cout << 0;
    }else if (contribution > 0 && procent > 0){
        procent = 1 + procent / 100;
        while (contribution < summa){
            contribution  = (contribution * procent);
            count = count + 1;
        }
        std::cout << count;
    }

}
