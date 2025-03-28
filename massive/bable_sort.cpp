#include <iostream>
void sort(int n, int arr[]){
    int c = n-1;
    for (int j = 0; j < n; j+=1){
        for (int i = 0; i < c; i+=1){
            if (arr[i] > arr[i+1]){
                std::swap(arr[i], arr[i+1]);
            }
    }
    c -= 1;
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
    int arr[1000] = {}, n;
    std::cin >> n;
    read(n, arr);
    sort(n, arr);
    write(n, arr);

}