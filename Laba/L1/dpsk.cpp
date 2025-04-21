#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Функция для генерации случайных данных
void generate_random_data(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = (rand() % 200001) - 100000; // от -100000 до 100000
    }
}

// Пузырьковая сортировка с подсчетом операций
void bubble_sort(int* arr, int size, long long& comparisons, long long& swaps) {
    comparisons = 0;
    swaps = 0;
    
    for (int i = 0; i < size-1; ++i) {
        for (int j = 0; j < size-i-1; ++j) {
            comparisons++;
            if (arr[j] > arr[j+1]) {
                // Обмен элементов
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps++;
            }
        }
    }
}

int main() {
    srand(time(0)); // Инициализация генератора случайных чисел
    
    // Размеры массивов для тестирования
    int sizes[] = {10, 100, 1000, 2000, 5000, 10000) //еньшил размеры для быстрой демонстрации
    int num_sizes = sizeof(sizes)/sizeof(sizes[0]);
    const int num_tests = 10;
    
    // Открываем файл для записи результатов
    ofstream outfile("bubble_sort_results.csv");
    if (!outfile.is_open()) {
        cerr << "Error opening output file!" << endl;
        return 1;
    }
    outfile << "Test,Size,Comparisons,Swaps,Time(ms)\n";
    
    // Проводим тесты для каждого размера
    for (int s = 0; s < num_sizes; ++s) {
        int size = sizes[s];
        cout << "Testing size: " << size << endl;
        
        // Выделяем память для массива
        int* arr = new int[size];
        
        for (int test = 1; test <= num_tests; ++test) {
            // Генерируем данные
            generate_random_data(arr, size);
            
            // Создаем копию для сортировки
            int* arr_copy = new int[size];
            for (int i = 0; i < size; ++i) {
                arr_copy[i] = arr[i];
            }
            
            // Замеряем время
            clock_t start = clock();
            long long comparisons = 0, swaps = 0;
            bubble_sort(arr_copy, size, comparisons, swaps);
            clock_t end = clock();
            
            // Вычисляем время выполнения
            double duration = (double)(end - start) * 1000.0 / CLOCKS_PER_SEC;
            
            // Записываем результаты в файл
            outfile << test << "," << size << "," << comparisons << "," << swaps << "," << duration << "\n";
            
            delete[] arr_copy;
        }
        
        delete[] arr;
    }
    
    outfile.close();
    cout << "Results saved to bubble_sort_results.csv" << endl;
    
    return 0;
}