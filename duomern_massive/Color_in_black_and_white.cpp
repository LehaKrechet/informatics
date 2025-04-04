#include <iostream>
#include <cmath>
void read(int n, int m, int arr[101][101]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cin >> arr[i][j];
            
    }
    }
}
void color(int n, int m, int arr[101][101]){
    double average = 0.0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            average += arr[i][j];
        }
    }
    average = average / (n*m);
    int roundedAverage = int(round(average * 10000));
    std::cout << roundedAverage / 10000 << ".";
    int fractionalPart = roundedAverage % 10000;
    if (fractionalPart < 1000) std::cout << "0";
    if (fractionalPart < 100) std::cout << "0";
    if (fractionalPart < 10) std::cout << "0";
    std::cout << fractionalPart << std::endl;

}
int main(){
    int n, m, arr[101][101] = {};
    std::cin >> n >> m;
    read(n, m, arr);
    color(n, m, arr);

}