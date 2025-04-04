#include <iostream>

void read(int n, int m, int arr[100][100]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cin >> arr[i][j];
            
    }
    }
}

void search(int n, int m, int k, int arr[100][100]){
    int count = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j] == k){
                count += 1;
            }
    }

}
std::cout << count;

}

int main(){
    int n, m, k, arr[100][100] = {};
    std::cin >> n >> m;
    read(n, m, arr);
    std::cin >> k;
    search(n, m, k, arr);

}