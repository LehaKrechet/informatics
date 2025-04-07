#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int matrix[100][100] = {};
    for (int i = 0; i < n; i++){
        int j = n - 1 - i;
        matrix[i][j] = 1;
        for (int k = 0; k < j; k++){
            matrix[n - j + k][j] = 2;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
}