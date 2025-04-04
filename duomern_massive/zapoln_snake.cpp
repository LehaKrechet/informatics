#include <iostream>

void zapoln(int n, int m, int arr[100][100]){
    int count = 0, shag = 1;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            arr[i][j] = count;
            count += shag;
            
    }
    count = count + m;
    shag *= -1;
    count += shag;
}
}
void write(int n, int m, int arr[100][100]){
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            if (arr[i][j] < 10){
                std::cout << "  " <<arr[i][j] << " ";
            }else if (arr[i][j] < 100){
                std::cout << " " <<arr[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
}

int main(){
    int n, m, arr[100][100] = {};
    std::cin >> n >> m;

    zapoln(n, m, arr);
    write(n, m, arr);

}