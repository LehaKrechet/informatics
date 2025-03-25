#include <iostream>

int del_vetv(int mess_arr[], int link_arr[], int n, int k){
    int count = 1;
    for (int i = 0; i < n; ++i){
        if (link_arr[i] == k){
            count += del_vetv(mess_arr, link_arr, n, mess_arr[i]);
        }
    }
    return count;
}
void read(int n, int mess_arr[], int link_arr[]){
    int mess, link;
    for (int i = 0; i < n; ++i){
        std::cin >> mess >> link;
        mess_arr[i] = mess;
        link_arr[i] = link;
    } 
}

int main(){
    int n, k;
    int mess_arr[1000] = {}, link_arr[1000] = {};
    std::cin >> n;
    read(n, mess_arr, link_arr);
    std::cin >> k;
    std::cout << del_vetv(mess_arr, link_arr, n, k);

}