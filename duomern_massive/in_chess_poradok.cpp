#include <iostream>
void chess(int n, int m, int arr[100][100]){
    int min_index_0 = 1, min_index_1 = 1, max_index_0 = 1, max_index_1 = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if ((i + j) % 2 == 1){
                arr[i][j] = 1;
            }else{
                arr[i][j] = 0;
            }
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
    chess(n, m, arr);
    write(n, m, arr);

}