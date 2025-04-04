#include <iostream>

int main() {
    const int MAX_SIZE = 32;
    int rows, cols, mines_count;
    std::cin >> rows >> cols >> mines_count;
    
    char field[MAX_SIZE][MAX_SIZE] = {};
    
    for(int i = 0; i < mines_count; ++i) {
        int r, c;
        std::cin >> r >> c;
        field[r-1][c-1] = '*';
    }
    
    const int directions[8][2] = {{-1,-1}, {-1,0}, {-1,1},
                                 {0,-1},          {0,1},
                                 {1,-1},  {1,0},  {1,1}};
    
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            if(field[i][j] != '*') {
                int count = 0;
                for(int d = 0; d < 8; ++d) {
                    int ni = i + directions[d][0];
                    int nj = j + directions[d][1];
                    if(ni >= 0 && ni < rows && nj >= 0 && nj < cols && field[ni][nj] == '*') {
                        ++count;
                    }
                }
                field[i][j] = count ? '0' + count : '0';
            }
        }
    }
    
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            std::cout << field[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    
    return 0;
}