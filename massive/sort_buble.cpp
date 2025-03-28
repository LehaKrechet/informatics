#include <iostream>
int sort_count(int n, int arr[]){
    int c = n-1, count = 0;
    for (int j = 0; j < n; j+=1){
        for (int i = 0; i < c; i+=1){
            if (arr[i] > arr[i+1]){
                std::swap(arr[i], arr[i+1]);
                count += 1;
            }
    }
    c -= 1;
}
return count;
}
void read(int n, int arr[]){
    int number;
    for (int i = 0; i < n; i++){
        std::cin >> number;
        arr[i] = number;
    }
}


int main(){
    int arr[1000] = {}, n;
    std::cin >> n;
    read(n, arr);
    std::cout << sort_count(n, arr);


}