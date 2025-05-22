#include <iostream>
#include <ctime>
#include <fstream>

int recursion_fibonaci(int n, int &count){
    count ++;
    if (n==1) {
        return 1;
    } else if (n==0) {
        return 0;
    }else{
        return recursion_fibonaci(n-1, count) + recursion_fibonaci(n-2, count);
    }

}

int cicle_fibonaci(int n, int &count){
    
    int arr[2] = {1,1}, res = 0;
    for (int i = 0; i < n-2; i++){
        count++;
        res = arr[0] + arr[1];
        arr[0] = arr[1];
        arr[1] = res;
    }
    return res;
}

int recursion_tribonaci(int n, int &count){
    count++;
    if (n==0) {
        return 0;
    } else if (n==1) {
        return 0;
    }else if (n == 2){
        return 1;
    }else{
        return recursion_tribonaci(n-1, count) + recursion_tribonaci(n-2, count) + recursion_tribonaci(n-3, count);
    }

}

int cicle_tribonaci(int n, int &count){
    int arr[3] = {0,0,1}, res = 0;
    for (int i = 0; i < n-2; i++){
        count++;
        res = arr[0] + arr[1] + arr[2];
        arr[0] = arr[1];
        arr[1] = arr[2];
        arr[2] = res;
    }
    return res;
}

int main(){
    std::ofstream file("new_file.csv");
    file << "№;" << "type;"  << "Number;"<< "count iteration;" << std::endl;
    for (int i = 6; i < 30; i++){
        int count_fib = 0,count_fib_cicle = 0, count_trib = 0, count_trib_cicle = 0;
        file << i << ';' <<"recursion_fibonaci;" << recursion_fibonaci(i, count_fib) << ";" << count_fib << std::endl;
        file << i << ';' <<"cicle_fibonaci;" << cicle_fibonaci(i, count_fib_cicle) << ";" << count_fib_cicle << std::endl;
        file << i << ';' <<"recursion_tribonaci;" << recursion_tribonaci(i, count_trib) << ";" << count_trib << std::endl;
        file << i << ';' <<"cicle_tribonaci;" << cicle_tribonaci(i, count_trib_cicle) << " " << count_trib_cicle << std::endl;
    }

    file.close();
}