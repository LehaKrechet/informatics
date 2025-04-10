// #include <iostream>
// #include <fstream>
// #include <cmath>


// void simulateMotion(double Vx, double Vy, double Vz, double ax, double ay, double az, double dt) {
//     // Начальные условия
//     double x = 0.0;
//     double t = 0.0;
//     double y = 0.0;
//     double z = 0.0;
//     double xt = 0.0;
//     double yt = 0.0;
//     double zt = 0.0;
//     double Vxt = 0.0;
//     double Vyt = 0.0;
//     double Vzt = 0.0;
//     double max_height = 0.0;
//     double max_height_time = 0.0;
//     double total_time = 0.0;
//     double landing_x = 0.0;
//     double landing_y = 0.0;
//     ay = ay - 9.8;

//     // Симуляция движения
//     while (true) {
//         xt = x + Vx*t + ((ax * (t*t))/2);
//         Vxt = Vx + ax*t;

//         yt = y + Vy*t + ((ay * (t*t))/2);
//         Vyt = Vy + ay*t;

//         zt = z + Vz*t + ((az * (t*t))/2);
//         Vzt = Vz + az*t;

//         max_height_time = -Vy/ay;
       
//     }
//     // Запись в CSV файл
//     std::ofstream file("simulation_results.csv");
//     if (file.is_open()) {
//         // Заголовок
//         file << "Time (s); X (m); Y (m); Z (m); Vx (m/s); Vy (m/s); Vz (m/s)\n";

//         // Запись данных
//         for (int i = 0; i < point_count; i++) {
//             file << points[i].time << "; "
//                  << points[i].x << "; "
//                  << points[i].y << "; "
//                  << points[i].z << "; "
//                  << points[i].vx << "; "
//                  << points[i].vy << "; "
//                  << points[i].vz << "\n";
//         }

//         // Запись итоговых данных
//         file << "Max Height; " << max_height << "\n";
//         file << "Time to Max Height; " << max_height_time << "\n";
//         file << "Total Flight Time; " << total_time << "\n";
//         file << "Landing Coordinates; " << landing_x << "; " << landing_y << "\n";

//         file.close();
//         cout << "Simulation results saved to simulation_results.csv" << endl;
//     } else {
//         cout << "Error opening file!" << endl;
//     }
// }

// int main() {
//     double Vx, Vy, Vz; // Начальные скорости
//     double ax, ay, az; // Ускорения
//     double dt; // Время между точками симуляции

//     cin >> Vx >> Vy >> Vz;
//     cin >> ax >> ay >> az;
//     cin >> dt;

//     simulateMotion(Vx, Vy, Vz, ax, ay, az, dt);

// }