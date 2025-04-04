#include <iostream>

void read(int n, int m, int arr[101][101]){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            std::cin >> arr[i][j];
            
    }
    }
}

void search_max_min(int n, int m, int arr[101][101]){
    int min_index_0 = 1, min_index_1 = 1, max_index_0 = 1, max_index_1 = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (arr[i][j] < arr[min_index_0][min_index_1]){
                min_index_0 = i;
                min_index_1 = j;
            }
            if (arr[i][j] > arr[max_index_0][max_index_1]){
                max_index_0 = i;
                max_index_1 = j;
            }
    }

}
std::cout << min_index_0 << " " << min_index_1 << " " << arr[min_index_0][min_index_1] << std::endl;
std::cout << max_index_0 << " " << max_index_1 << " " << arr[max_index_0][max_index_1];

}

int main(){
    int n, m, arr[101][101] = {};
    std::cin >> n >> m;
    read(n, m, arr);
    search_max_min(n, m, arr);

}