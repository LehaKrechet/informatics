#include <iostream>

void read(int n, int arr[100][100]){
    int c = n-1;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            if (j < c){
                arr[i][j] = 0;
            }else if (j == c){
                arr[i][j] = 1;
            }else if (j > c){
                arr[i][j] = 2;
            }

        }
        c -= 1;
    }
}
void write(int n, int arr[100][100]){
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main(){
    int n, arr[100][100] = {};
    std::cin >> n;

    read(n, arr);
    write(n, arr);

}