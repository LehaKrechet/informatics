#include <iostream>
void read(int n, int m, int arr[100][100]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cin >> arr[i][j];
            
    }
    }
}
void perevorot(int n, int m, int arr[100][100], int per_arr[100][100]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            per_arr[j][n - 1 - i] = arr[i][j];
        }

    }

}
void write(int n, int m, int arr[100][100]){
    std::cout << m << " " << n << std::endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main(){
    int n, m, arr[100][100] = {}, per_arr[100][100] = {};
    std::cin >> n >> m;
    read(n, m, arr);
    perevorot(n, m, arr, per_arr);
    write(n, m, per_arr);

}