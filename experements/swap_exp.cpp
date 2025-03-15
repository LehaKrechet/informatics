#include <iostream>


int main(){
    int n;
    std::cin >> n;
    int arr[100] = {};
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    //reverse massive
    for (int i = 0; i < n/2; ++i){
        std::swap(arr[i], arr[n-1-i]);
    }
    for (int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
}