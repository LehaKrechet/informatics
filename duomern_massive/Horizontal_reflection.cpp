#include <iostream>

void read(int n, int m, int arr[100][100]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cin >> arr[i][j];
            
    }
    }
}
void perevorot(int n, int m, int arr[100][100]){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m / 2; ++j) {
            std::swap(arr[i][j], arr[i][m - 1 - j]);
        }
    }
}
void write(int n, int m, int arr[100][100]){
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
int main(){
    int n, m, arr[100][100] = {};
    std::cin >> n >> m;
    read(n, m, arr);
    perevorot(n, m, arr);
    write(n, m, arr);

}