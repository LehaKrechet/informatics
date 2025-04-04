#include <iostream>

void read(int n, int m, int arr[101][101]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cin >> arr[i][j];
            
    }
    }
}

void search_max(int n, int m, int arr[101][101]){
    int max_index_0 = 1, max_index_1 = 1;
    bool flag = false;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j] > arr[max_index_0][max_index_1]){
                max_index_0 = i;
                max_index_1 = j;
            }

    }
}
    bool has_max[100] = {false};
        
        // Поиск столбцов с максимальным элементом
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (arr[i][j] == arr[max_index_0][max_index_1]) {
                    has_max[j] = true;
                }
            }
        }
        
        // Вывод найденных столбцов
        for (int j = 0; j < m; ++j) {
            if (has_max[j]) {
                for (int i = 0; i < n; ++i) {
                    std::cout << arr[i][j];
                    if (i != n - 1) {
                        std::cout << " ";
                    }
                }
                std::cout << std::endl;
            }
        }
}
int main(){
    int n, m, arr[101][101] = {};
    std::cin >> n >> m;
    read(n, m, arr);
    search_max(n, m, arr);

}