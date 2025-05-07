#include <iostream>

using namespace std;

int main() {
    int N, M, W;
    cin >> N >> M >> W;

    int field[32][32] = {0};
    

    for (int i = 0; i < W; ++i) {
        int x, y;
        cin >> x >> y;
        field[x-1][y-1] = -1; 

        for (int dx = -1; dx <= 1; ++dx) {
            for (int dy = -1; dy <= 1; ++dy) {
                int nx = x-1 + dx;
                int ny = y-1 + dy;

                if (nx >= 0 && nx < N && ny >= 0 && ny < M && field[nx][ny] != -1) {
                    field[nx][ny]++;
                }
            }
        }
    }
    

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (field[i][j] == -1) {
                cout << "*";
            } else {
                cout << field[i][j];
            }

            if (j != M-1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}