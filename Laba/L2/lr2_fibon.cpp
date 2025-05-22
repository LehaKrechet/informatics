#include <iostream>
#include <ctime>
#include <fstream>

int recursion_fibonaci(int n){
    if (n==1) {
        return 1;
    } else if (n==0) {
        return 0;
    }else{
        return recursion_fibonaci(n-1) + recursion_fibonaci(n-2);
    }

}
int cicle_fibonaci(int n){
    int arr[2] = {1,1}, res = 0;
    for (int i = 0; i < n-2; i++){
        res = arr[0] + arr[1];
        arr[0] = arr[1];
        arr[1] = res;
    }
    return res;
}


int recursion_tribonaci(int n){
    if (n==0) {
        return 0;
    } else if (n==1) {
        return 1;
    }else if (n == 2){
        return 1;
    }else{
        return recursion_tribonaci(n-1) + recursion_tribonaci(n-2) + recursion_tribonaci(n-3);
    }

}
int cicle_tribonaci(int n){
    int arr[3] = {0,0,1}, res = 0;
    for (int i = 0; i < n-2; i++){
        res = arr[0] + arr[1] + arr[2];
        arr[0] = arr[1];
        arr[1] = arr[2];
        arr[2] = res;
    }
    return res;
}

int main(){
    int start_time = 0, end_time = 0;
    std::ofstream file("file.csv");
    file << "№;" << "number_recursion_fibonaci;" << "time_recursion_fibonaci;" << "number_cicle_fibonaci;" << "time_cicle_fibonaci;" << "number_recursion_tribonaci;" << "time_recursion_tribonaci;"<< "number_cicle_tribonaci;" << "time_cicle_tribonaci;"<< std::endl;
    for (int i = 5; i <= 30; i++){
    
    start_time = clock();
    file << i << ';' << recursion_fibonaci(i) << ';';
    end_time = clock();
    file << ((double)end_time - start_time)/CLOCKS_PER_SEC << ';';

    start_time = clock();
    file << cicle_fibonaci(i) << ';';
    end_time = clock();
    file << ((double)end_time - start_time)/CLOCKS_PER_SEC << ';';

    start_time = clock();
    file << recursion_tribonaci(i) << ';';
    end_time = clock();
    file << ((double)end_time - start_time)/CLOCKS_PER_SEC << ';';

    start_time = clock();
    file << cicle_tribonaci(i) << ';';
    end_time = clock();
    file << ((double)end_time - start_time)/CLOCKS_PER_SEC << std::endl;

    }

    file.close();
}