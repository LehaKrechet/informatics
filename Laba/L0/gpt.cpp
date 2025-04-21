#include <iostream>
#include <fstream>
#include <cmath>

// Тип Vector3 представлен как массив из трех double
typedef double Vector3[3];

int main() {
    double vx, vy, vz, ax, ay, az, dt;

    // Ввод данных
    std::cout << "Введите начальные скорости Vx, Vy, Vz (м/c): ";
    std::cin >> vx >> vy >> vz;

    std::cout << "Введите ускорения ax, ay, az (м/c^2): ";
    std::cin >> ax >> ay >> az;

    std::cout << "Введите время между точками симуляции dt (с): ";
    std::cin >> dt;

    // Проверка условия ay < 0
    if (ay >= 0) {
        std::cerr << "Ошибка: ускорение ay должно быть отрицательным." << std::endl;
        return 1;
    }

    // Расчет времени достижения максимальной высоты и координаты в этот момент
    double time_to_max_height = -vy / ay;
    Vector3 max_height_coords = {0}; // Инициализация нулями
    max_height_coords[0] = vx * time_to_max_height + 0.5 * ax * pow(time_to_max_height, 2);
    max_height_coords[1] = vy * time_to_max_height + 0.5 * ay * pow(time_to_max_height, 2);
    max_height_coords[2] = vz * time_to_max_height + 0.5 * az * pow(time_to_max_height, 2);

    // Расчет общего времени полета
    double total_flight_time = 2 * time_to_max_height; // Assuming az = 0, ax = 0

    // Расчет координат точки приземления
    Vector3 landing_coords = {0}; // Инициализация нулями
    landing_coords[0] = vx * total_flight_time + 0.5 * ax * pow(total_flight_time, 2);
    landing_coords[1] = 0;  // По условию, при касании земли y = 0
    landing_coords[2] = vz * total_flight_time + 0.5 * az * pow(total_flight_time, 2);

    // Количество шагов симуляции + 2 (для апогея и касания земли)
    int num_steps = static_cast<int>(total_flight_time / dt) + 2;

    // Выделение массивов для хранения данных симуляции
    double* time = new double[num_steps];
    Vector3* position = new Vector3[num_steps];
    Vector3* velocity = new Vector3[num_steps];

    // Инициализация position и velocity нулями
    for (int k = 0; k < num_steps; ++k) {
        position[k][0] = position[k][1] = position[k][2] = 0.0;
        velocity[k][0] = velocity[k][1] = velocity[k][2] = 0.0;
    }

    // Заполнение данными - основной цикл симуляции
    double current_time = 0;
    int i;
    for (i = 0; i < num_steps - 2; ++i) { // Добавляем точку апогея и приземления после цикла

        time[i] = current_time;

        position[i][0] = vx * current_time + 0.5 * ax * pow(current_time, 2);
        position[i][1] = vy * current_time + 0.5 * ay * pow(current_time, 2);
        position[i][2] = vz * current_time + 0.5 * az * pow(current_time, 2);

        velocity[i][0] = vx + ax * current_time;
        velocity[i][1] = vy + ay * current_time;
        velocity[i][2] = vz + az * current_time;

        current_time += dt;
    }

    // Добавляем точку апогея
    time[i] = time_to_max_height;
    position[i][0] = max_height_coords[0];
    position[i][1] = max_height_coords[1];
    position[i][2] = max_height_coords[2];
    velocity[i][0] = vx + ax * time_to_max_height;
    velocity[i][1] = 0;
    velocity[i][2] = vz + az * time_to_max_height;
    i++;

    // Добавляем точку приземления
    time[i] = total_flight_time;
    position[i][0] = landing_coords[0];
    position[i][1] = landing_coords[1];
    position[i][2] = landing_coords[2];
    velocity[i][0] = vx + ax * total_flight_time;
    velocity[i][1] = 0;
    velocity[i][2] = vz + az * total_flight_time;

    // Вывод в CSV файл
    std::ofstream outfile("trajectory.csv");

    if (!outfile.is_open()) {
        std::cerr << "Не удалось открыть файл для записи." << std::endl;
        delete[] time;
        delete[] position;
        delete[] velocity;
        return 1;
    }

    // Вывод информации о параметрах симуляции
    outfile << "Vx,Vy,Vz,ax,ay,az,MaxHeightX,MaxHeightY,MaxHeightZ,TimeToMaxHeight,TotalFlightTime,LandingX,LandingZ" << std::endl;
    outfile.precision(6);
    outfile << vx << "," << vy << "," << vz << ","
            << ax << "," << ay << "," << az << ","
            << max_height_coords[0] << "," << max_height_coords[1] << "," << max_height_coords[2] << ","
            << time_to_max_height << "," << total_flight_time << ","
            << landing_coords[0] << "," << landing_coords[2] << std::endl;

    // Вывод заголовка таблицы
    outfile << "Time,X,Y,Z,Vx,Vy,Vz" << std::endl;

    // Вывод данных таблицы
    for (int j = 0; j < num_steps; ++j) {
        outfile.precision(6);
        outfile << time[j] << ","
                << position[j][0] << "," << position[j][1] << "," << position[j][2] << ","
                << velocity[j][0] << "," << velocity[j][1] << "," << velocity[j][2] << std::endl;
    }

    outfile.close();

    std::cout << "Симуляция завершена. Результаты записаны в файл trajectory.csv" << std::endl;

    // Освобождение выделенной памяти
    delete[] time;
    delete[] position;
    delete[] velocity;

    return 0;
}