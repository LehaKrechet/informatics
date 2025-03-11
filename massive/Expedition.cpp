#include <iostream>

int main(){
    int help_number = 0, number_n, number_m, number_plot, number_mesk, count = 0, array_mesk[2000] = {};
    std::cin >> number_n >> number_m;
    number_plot = number_n * number_m;
    int array_plot[number_plot] = {};
    for (int i = 0; i < number_plot; ++i){
        std::cin >> array_plot[i];
    }
    std::cin >> number_mesk;
    for (int i = 0; i < number_mesk; ++i){
        std::cin >> array_mesk[i];
    }
    for (int j = 0; j < number_plot; ++j){

        for (int i = 0; i < number_plot-1; i+=1){
            if (array_plot[i+1] < array_plot[i]){
            array_plot[i+1] = array_plot[i+1] + array_plot[i];
            array_plot[i] = array_plot[i+1] - array_plot[i];
            array_plot[i+1] = array_plot[i+1] - array_plot[i];
            }
        }
    }
    for (int j = 0; j < number_mesk; ++j){

        for (int i = 0; i < number_mesk-1; i+=1){
            if (array_mesk[i+1] < array_mesk[i]){
            array_mesk[i+1] = array_mesk[i+1] + array_mesk[i];
            array_mesk[i] = array_mesk[i+1] - array_mesk[i];
            array_mesk[i+1] = array_mesk[i+1] - array_mesk[i];
            }
        }
    }

    int j = 0;

    for (int i = 0; i < number_plot && j < number_mesk; ++i) {
        if (array_plot[i] >= array_mesk[j]) {
            count+=1;
            j+=1;
        }
    }

    std::cout << count;

}