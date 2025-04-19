#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

void sort(int n, uint64_t arr[], uint64_t count_p_s[]){
    uint64_t c = n-1, perest = 0, sravn = 0;
    for (int j = 0; j < n; j+=1){
        for (int i = 0; i < c; i+=1){
            sravn += 1;
            if (arr[i] > arr[i+1]){
                std::swap(arr[i], arr[i+1]);
                perest += 1;
            }
        }
    c -= 1;
    }
    count_p_s[0] = sravn;
    count_p_s[1] = perest;
}

void generate_random(int arr[8]){
    std::ofstream file("file.csv");
    srand(time(NULL));

    for (int j = 0; j < 8; j++){
        file << arr[j] << ';' <<"Sravnen" << ';' << "Perenos" << std::endl;
        for (int k = 0; k < 10; k+=1){
            uint64_t count_p_s[2] = {};
            uint64_t mass[arr[j]] = {};
            for (int i = 0; i < arr[j]; i++){
                mass[i] =  RAND_MAX * ((double)(rand())/RAND_MAX * (200001.0 / RAND_MAX) - (100000.0 / RAND_MAX));
            }

            sort(arr[j], mass, count_p_s);
            file << k << ":;" << count_p_s[0] << ';' << count_p_s[1];
            file << std::endl;
            
        }
    }
    file.close();


}
int main(){
    int arr[8] = {10, 100, 1000, 2000, 5000, 10000, 50000, 100000};
    generate_random(arr);
}