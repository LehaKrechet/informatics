#include <iostream>

void read(int n, int m, int matrix[21][21]){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            std::cin >> matrix[i][j];
            
    }
    }
}


void gold(int x, int matrix[21][21]){
    int count = 0, r, c;
    for (int i = 0; i < x; i++){
        std::cin >> r >> c;
        count += matrix[r][c];
        matrix[r][c] = 0;
    }
    std::cout << count;
}




int main(){
    int n, m, x,  matrix[21][21] = {};
    std::cin >> n >> m;
    read(n, m, matrix);
    std::cin >> x;
    gold(x, matrix);



}