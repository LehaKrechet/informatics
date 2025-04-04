#include <iostream>

void read(int n, int m, int matrix[100][100]){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            std::cin >> matrix[i][j];
            
    }
    }
}


void min_str(int n, int m, int matrix[100][100]){
    int min_s = 1, summ_str = 0, arr_sum[100] = {};
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            arr_sum[i] += matrix[i][j];
            
        }
        if (i == 1 || arr_sum[i] < summ_str){
            min_s = i;
            summ_str = arr_sum[i];
        }
    }
    for (int j = 1; j <= m; j++){
        std::cout << matrix[min_s][j] << ' '; 
    }
}




int main(){
    int n, m,  matrix[100][100] = {};
    std::cin >> n >> m;
    read(n, m, matrix);
    min_str(n, m, matrix);



}