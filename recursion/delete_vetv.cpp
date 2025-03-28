#include <iostream>

<<<<<<< HEAD

int countMessages(int ids[], int parents[], int N, int k, bool visited[]) {
   
    if (visited[k]) return 0;

    visited[k] = true;

    int count = 1; 

    for (int i = 0; i < N; ++i) {
        if (parents[i] == k) {
            count += countMessages(ids, parents, N, ids[i], visited);
=======
int del_vetv(int mess_arr[], int link_arr[], int n, int k){
    int count = 1;
    for (int i = 0; i < n; ++i){
        if (link_arr[i] == k){
            count += del_vetv(mess_arr, link_arr, n, mess_arr[i]);
>>>>>>> 37e4cbd2980b29939f5ddc3e16c37dc8cf83303f
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

<<<<<<< HEAD
int main() {
    int N;
    std::cin >> N;

    int ids[N];
    int parents[N];
    for (int i = 0; i < N; ++i) {
        std::cin >> ids[i] >> parents[i];
    }

    int k;
=======
int main(){
    int n, k;
    int mess_arr[1000] = {}, link_arr[1000] = {};
    std::cin >> n;
    read(n, mess_arr, link_arr);
>>>>>>> 37e4cbd2980b29939f5ddc3e16c37dc8cf83303f
    std::cin >> k;
    std::cout << del_vetv(mess_arr, link_arr, n, k);

<<<<<<< HEAD
    bool visited[N + 1] = {false};

    int result = countMessages(ids, parents, N, k, visited);

    std::cout << result << std::endl;

}
=======
}
>>>>>>> 37e4cbd2980b29939f5ddc3e16c37dc8cf83303f
