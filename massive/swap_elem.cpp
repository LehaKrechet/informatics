#include <iostream>
void sw(int n, int arr[]){
    for (int i = 0; i < n-1; i+=2){
        std::swap(arr[i], arr[i+1]);
    }
}
void read(int n, int arr[]){
    int number;
    for (int i = 0; i < n; i++){
        std::cin >> number;
        arr[i] = number;
    }
}
void write(int n, int arr[]){
    for (int i = 0; i < n; i++){
        std::cout << arr[i] << ' ';
    }
}

int main(){
    int arr[35] = {}, n;
    std::cin >> n;
    read(n, arr);
    sw(n, arr);
    write(n, arr);

}