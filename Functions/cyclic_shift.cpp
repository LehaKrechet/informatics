

#include <iostream>


void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}


void cyclicShift(int arr[], int n, int k) {
    
    k %= n;
    if (k < 0) {
        k += n; 
    }

    reverse(arr, 0, n - 1);    
    reverse(arr, 0, k - 1);     
    reverse(arr, k, n - 1);     
}

int main() {
    int n, k;


    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

 
    std::cin >> k;

  
    cyclicShift(arr, n, k);

    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}