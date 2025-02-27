#include <iostream>

int main(){
    int price_rub, price_cop, give_rub, give_cop, result_rub, result_cop;
    std::cin >> price_rub >> price_cop >> give_rub >> give_cop;
    price_cop = price_cop + price_rub * 100;
    give_cop = give_cop + give_rub * 100;
    result_rub = (give_cop - price_cop) / 100;
    result_cop = (give_cop - price_cop) % 100;
    std::cout << result_rub << " " << result_cop;
}