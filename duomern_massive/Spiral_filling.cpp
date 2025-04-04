#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int size = 2 * n + 1;
    int A[size][size] = {};

    int x = n, y = n; 
    A[y][x] = 0;
    int current = 1;

    int directions[4][2] = {{0, -1}, {-1, 0}, {0, 1}, {1, 0}};
    int direction = 0;
    int step_length = 1;
    int step_count = 0;

    while (current < size * size) {
        for (int i = 0; i < step_length; i++) {
            x += directions[direction][0];
            y += directions[direction][1];

            if (x >= 0 && x < size && y >= 0 && y < size) {
                A[y][x] = current++;
            }
        }

        direction = (direction + 1) % 4;
        step_count++;
        if (step_count % 2 == 0) {
            step_length++;
        }
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (A[i][j] < 10) {
                cout << "  " << A[i][j];
            } else if (A[i][j] < 100) {
                cout << " " << A[i][j];
            } else {
                cout << A[i][j];
            }
        }
        cout << endl;
    }

    return 0;
}