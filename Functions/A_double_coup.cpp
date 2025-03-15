
#include <iostream>
void coup(int start, int end, int array[]){
    int temp;
    while (start < end) {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }

}
void sequence(int number_n, int arr[]){
    int count = 1;
    for (int i = 0; i < number_n; ++i){
        arr[i] = count;
        count += 1;
    }
}
void double_coup(int number_n, int start_A, int end_B, int start_C, int end_D, int arr[]){
    sequence(number_n, arr);
    coup(start_A-1, end_B-1, arr);
    coup(start_C-1, end_D-1, arr);
}
void array_out(int number_n, int arr[]){
    for (int i = 0; i < number_n; i++){
        std::cout << arr[i] << " ";
    }

}
int main(){
    int arr[1000] = {}, temp, number_n, start_A, end_B, start_C, end_D;
    std::cin >> number_n >> start_A >> end_B >> start_C >> end_D;
    double_coup(number_n, start_A, end_B, start_C, end_D, arr);
    array_out(number_n, arr);
}