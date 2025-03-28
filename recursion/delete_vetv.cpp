#include <iostream>


int countMessages(int ids[], int parents[], int N, int k, bool visited[]) {
   
    if (visited[k]) return 0;

    visited[k] = true;

    int count = 1; 

    for (int i = 0; i < N; ++i) {
        if (parents[i] == k) {
            count += countMessages(ids, parents, N, ids[i], visited);
        }
    }

    return count;
}

int main() {
    int N;
    std::cin >> N;

    int ids[N];
    int parents[N];
    for (int i = 0; i < N; ++i) {
        std::cin >> ids[i] >> parents[i];
    }

    int k;
    std::cin >> k;

    bool visited[N + 1] = {false};

    int result = countMessages(ids, parents, N, k, visited);

    std::cout << result << std::endl;

}
