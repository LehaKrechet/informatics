#include <iostream>

void read(int n, int m, int matrix[100][100]){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            std::cin >> matrix[i][j];
            
    }
    }
}

void search_saddle(int n, int m, int array[100][100]){
    bool found = false; // Флаг для отслеживания найденных элементов

    // Проходим по всем элементам массива
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            // Проверяем, является ли элемент минимальным в своей строке
            bool isMinInRow = true;
            for (int col = 1; col <= m; ++col) {
                if (array[i][j] > array[i][col]) {
                    isMinInRow = false;
                    break;
                }
            }

            // Если элемент минимален в строке, проверяем, является ли он максимальным в своем столбце
            if (isMinInRow) {
                bool isMaxInCol = true;
                for (int row = 1; row <= n; ++row) {
                    if (array[i][j] < array[row][j]) {
                        isMaxInCol = false;
                        break;
                    }
                }

                // Если оба условия выполнены, выводим индексы
                if (isMaxInCol) {
                    std::cout << (i) << " " << (j) << std::endl; // +1 для 1-индексации
                    found = true; // Устанавливаем флаг, что элемент найден
                }
            }
        }
    }

    // Если не нашли ни одного элемента, выводим 0
    if (!found) {
        std::cout << 0 << std::endl;
    }
}
void write(int n, int m, int matrix[100][100]){
    std::cout << m << " " << n << std::endl;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


int main(){
    int n, m, matrix[100][100] = {};
    std::cin >> n >> m;
    read(n, m, matrix);
    search_saddle(n, m, matrix);



}