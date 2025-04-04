#include <iostream>

void read(int n, int arr[100][100]){
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            std::cin >> arr[i][j];
    }
}
}
void sim_prov(int n, int arr[100][100]){
    int count = 0;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            if (arr[i][j] == arr[j][i]){
                count += 1;
            }
    }

}
if (count == n*n){
    std::cout << "yes";
}else{
    std::cout << "no";
}
}

int main(){
    int n, arr[100][100] = {};
    std::cin >> n;

    read(n, arr);
    sim_prov(n, arr);

}