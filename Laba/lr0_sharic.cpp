#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    double Vx, Vy, Vz;
    double ax, ay, az;
    double dt;
    
    // Ввод данных
    cin >> Vx >> Vy >> Vz;
    cin >> ax >> ay >> az;
    cin >> dt;

    // Максимальное количество точек (оцениваем с запасом)
    const int MAX_POINTS = 100000;
    double* time = new double[MAX_POINTS];
    double* x = new double[MAX_POINTS];
    double* y = new double[MAX_POINTS];
    double* z = new double[MAX_POINTS];
    double* vx = new double[MAX_POINTS];
    double* vy = new double[MAX_POINTS];
    double* vz = new double[MAX_POINTS];
    
    // Начальные условия
    time[0] = 0.0;
    x[0] = 0.0;
    y[0] = 0.0;
    z[0] = 0.0;
    vx[0] = Vx;
    vy[0] = Vy;
    vz[0] = Vz;
    
    int point_count = 1;
    double max_height = 0.0;
    double max_height_time = 0.0;
    bool landed = false;
    
    while (!landed && point_count < MAX_POINTS - 2) {
        // Обновляем время
        time[point_count] = time[point_count-1] + dt;
        
        // Обновляем скорости
        vx[point_count] = vx[point_count-1] + ax * dt;
        vy[point_count] = vy[point_count-1] + ay * dt;
        vz[point_count] = vz[point_count-1] + az * dt;
        
        // Обновляем позиции
        x[point_count] = x[point_count-1] + vx[point_count-1] * dt;
        y[point_count] = y[point_count-1] + vy[point_count-1] * dt;
        z[point_count] = z[point_count-1] + vz[point_count-1] * dt;
        
        // Проверяем; достигли ли земли (y <= 0)
        if (y[point_count] <= 0.0) {
            landed = true;
            
            // Находим точное время и координаты приземления
            double t_hit = time[point_count-1] + (-y[point_count-1]) / (y[point_count] - y[point_count-1]) * dt;
            double x_hit = x[point_count-1] + (x[point_count] - x[point_count-1]) * ((t_hit - time[point_count-1]) / dt);
            double z_hit = z[point_count-1] + (z[point_count] - z[point_count-1]) * ((t_hit - time[point_count-1]) / dt);
            
            // Добавляем точку приземления
            time[point_count] = t_hit;
            x[point_count] = x_hit;
            y[point_count] = 0.0;
            z[point_count] = z_hit;
            vx[point_count] = 0.0;
            vy[point_count] = 0.0;
            vz[point_count] = 0.0;
            point_count++;
            
            break;
        }
        
        // Проверяем максимальную высоту
        if (y[point_count] > max_height) {
            max_height = y[point_count];
            max_height_time = time[point_count];
        }
        
        point_count++;
    }
    
    // Находим точку с максимальной высотой
    int apex_index = 0;
    for (int i = 0; i < point_count; i++) {
        if (y[i] == max_height) {
            apex_index = i;
            break;
        }
    }
    
    // Если точка апогея не была записана (попали между шагами); вычисляем ее
    if (y[apex_index] != max_height) {
        // Время достижения максимальной высоты (из решения уравнения Vy + ay*t = 0)
        max_height_time = -Vy / ay;
        
        // Вычисляем точные координаты апогея
        double x_apex = Vx * max_height_time + 0.5 * ax * max_height_time * max_height_time;
        double z_apex = Vz * max_height_time + 0.5 * az * max_height_time * max_height_time;
        
        // Вставляем точку апогея в массив
        for (int i = point_count; i > apex_index; i--) {
            time[i] = time[i-1];
            x[i] = x[i-1];
            y[i] = y[i-1];
            z[i] = z[i-1];
            vx[i] = vx[i-1];
            vy[i] = vy[i-1];
            vz[i] = vz[i-1];
        }
        
        time[apex_index] = max_height_time;
        x[apex_index] = x_apex;
        y[apex_index] = max_height;
        z[apex_index] = z_apex;
        vx[apex_index] = Vx + ax * max_height_time;
        vy[apex_index] = 0.0; // В апогее вертикальная скорость равна 0
        vz[apex_index] = Vz + az * max_height_time;
        
        point_count++;
    }
    
    // Вывод результатов в CSV
    ofstream out("trajectory.csv");
    out << "Max height point:; " << x[apex_index] << "; " << max_height << "; " << z[apex_index] << endl;
    out << "Time to max height:; " << max_height_time << endl;
    out << "Total flight time:; " << time[point_count-1] << endl;
    out << "Landing point:; " << x[point_count-1] << "; 0; " << z[point_count-1] << endl;
    out << endl;
    
    // Таблица данных
    out << "time;x;y;z;vx;vy;vz" << endl;
    for (int i = 0; i < point_count; i++) {
        out << time[i] << ";" 
            << x[i] << ";" 
            << y[i] << ";" 
            << z[i] << ";" 
            << vx[i] << ";" 
            << vy[i] << ";" 
            << vz[i] << endl;
    }
    
    out.close();
    
    // Освобождаем память
    delete[] time;
    delete[] x;
    delete[] y;
    delete[] z;
    delete[] vx;
    delete[] vy;
    delete[] vz;
    
    return 0;
}