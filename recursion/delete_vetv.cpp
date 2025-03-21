#include <iostream>

const int MAX_MESSAGES = 1001;

int parents[MAX_MESSAGES];
int children_count[MAX_MESSAGES];
int children[MAX_MESSAGES][MAX_MESSAGES];

int removeMessages(int k) {
    int count = 1;
    for (int i = 0; i < children_count[k]; ++i) {
        count += removeMessages(children[k][i]);
    }
    return count;
}

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i <= MAX_MESSAGES; ++i) {
        parents[i] = 0;
        children_count[i] = 0;
    }

    for (int i = 0; i < n; ++i) {
        int message, parent;
        std::cin >> message >> parent;
        parents[message] = parent;
        if (parent != 0) {
            children[parent][children_count[parent]] = message;
            children_count[parent]++;
        }
    }

    int k;
    std::cin >> k;

    std::cout << removeMessages(k);

    return 0;
}