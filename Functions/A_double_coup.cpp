#include <iostream>
int* coup(int start, int end, int array[]){
    int temp;
    while (start < end) {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
    return array;

}
int* sequence(int number_n, int arr[]){
    int count = 1;
    for (int i = 0; i < number_n; ++i){
        arr[i] = count;
        count += 1;
    }
    return arr;
}
int main(){
    int arr[1000] = {}, temp, number_n, start_A, end_B, start_C, end_D;
    std::cin >> number_n >> start_A >> end_B >> start_C >> end_D;
    int* array = sequence(number_n, arr);
    int* reverse_array = coup(start_A-1, end_B-1, array);
    int* reverse_array_2 = coup(start_C-1, end_D-1, reverse_array);
    for (int i = 0; i < number_n; i++){
        std::cout << reverse_array_2[i] << " ";
    }
}