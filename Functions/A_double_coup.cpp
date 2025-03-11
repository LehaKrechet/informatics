#include <iostream>
int coup(int start, int number_n){

}
int main(){
    int array[1000] = {}, temp, number_n;
    std::cin >> number_n;
    for (int i = 0; i < number_n; ++i){
        std::cin >> array[i];
    }
    for (int i = 0; i < number_n/2; i++){
        temp = array[i];
        array[i] = array[(number_n - 1) - i];
        array[(number_n - 1) - i] = temp;

        }
    for (int i = 0; i < number_n; i++){
        std::cout << array[i] << " ";
}
}