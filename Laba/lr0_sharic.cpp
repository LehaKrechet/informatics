#include <iostream>
#include <fstream>

void convert(double number, int arr[3]){
    int drob = int((int(number) - (number+1)) * 1000);
    arr[0] = abs((drob / 100) % 10);
    arr[1] = abs((drob / 10) % 10);
    arr[2] = abs(drob % 10);
}
int main(){
    int arr[3] = {};

    std::ofstream file("file.csv");

    double Vx, Vy, Vz, ax, ay, az, dt;
    std::cin >> Vx >> Vy >> Vz;
    std::cin >> ax >> ay >> az;
    std::cin >> dt;

    double X, Y, Z, Xd, Yd, Zd;
    double H_max, T_up;

    H_max = Vy*Vy / (2*abs(ay)); 
    T_up = Vy/abs(ay);

    X= Vx*T_up + ax*T_up*T_up/2;
    Y= H_max;
    Z= Vz*T_up + az*T_up*T_up/2;

    double T_poleta = 2 * T_up; 

    Yd= 0;
    Xd= Vx*T_poleta + ax*T_poleta*T_poleta/2;
    Zd= Vz*T_poleta + az*T_poleta*T_poleta/2;

    file << " ;Vx;Vy;Vz;ax;ay;az;dt" << std::endl;
    file << ';';
    file << Vx <<';' << Vy << ';' << Vz << ';' << ax << ';' << ay << ';' << az << ';' << dt << std::endl;
    file << std::endl;
    file << " ;x;y;z" << std::endl;

    convert(X, arr);
    file << "Max_height:; " << int(X) << ',' << arr[0] << arr[1] << arr[2] << ';';
    convert(Y, arr);
    file << int(Y) << ',' << arr[0] << arr[1] << arr[2] << ';' ;
    convert(Z, arr);
    file << int(Z) << ',' << arr[0] << arr[1] << arr[2] << std::endl;

    convert(T_up, arr);
    file << "Max_height_time:; " << int(T_up) << ',' << arr[0] << arr[1] << arr[2] << std::endl;

    convert(T_poleta, arr);
    file << "Fly_time:; " << int(T_poleta)  << ',' << arr[0] << arr[1] << arr[2] << std::endl;

    convert(Xd, arr);
    file << "Coord_down:; " << int(Xd) << ',' << arr[0] << arr[1] << arr[2] << ';';
    convert(Yd, arr);
    file << int(Yd) << ',' << arr[0] << arr[1] << arr[2] << ';' ;
    convert(Zd, arr);
    file << int(Zd) << ',' << arr[0] << arr[1] << arr[2] << std::endl;

    file << std::endl;

    double Xt, Yt, Zt, Vxt, Vyt, Vzt;
    file << "time" << ';' << "x" << ';' << "y" << ';' << "z" << ';' << "Vx" << ';' << "Vy" << ';' << "Vz" << std::endl;
    for (double t = 0; t<T_poleta - (0.5 * dt); t+=dt){
        Xt= Vx*t + (ax*t*t)/2; 
        Vxt= Vx + ax*t;
    
        Yt= Vy*t + (ay*t*t)/2; 
        Vyt= Vy + ay*t;
    
        Zt= Vz*t + (az*t*t)/2; 
        Vzt= Vz + az*t;

        convert(t, arr);
        file << int(t) << ',' << arr[0] << arr[1] << arr[2] << ';'; 

        convert(Xt, arr);
        file << int(Xt) << ',' << arr[0] << arr[1] << arr[2] << ';';
        convert(Yt, arr);
        file << int(Yt) << ',' << arr[0] << arr[1] << arr[2] << ';' ;
        convert(Zt, arr);
        file << int(Zt) << ',' << arr[0] << arr[1] << arr[2] << ';';

        convert(Vxt, arr);
        file  << int(Vxt) << ',' << arr[0] << arr[1] << arr[2] << ';';
        convert(Vyt, arr);
        file << int(Vyt) << ',' << arr[0] << arr[1] << arr[2] << ';' ;
        convert(Vzt, arr);
        file << int(Vzt) << ',' << arr[0] << arr[1] << arr[2] << std::endl;



    }
    file << std::endl;

    Vxt= Vx + ax*T_up; 
    Vyt= Vy + ay*T_up;
    Vzt= Vz + az*T_up;

    convert(T_up, arr);
    file << int(T_up) << ',' << arr[0] << arr[1] << arr[2] << ';'; 

    convert(X, arr);
    file << int(X) << ',' << arr[0] << arr[1] << arr[2] << ';';
    convert(Y, arr);
    file << int(Y) << ',' << arr[0] << arr[1] << arr[2] << ';' ;
    convert(Z, arr);
    file << int(Z) << ',' << arr[0] << arr[1] << arr[2] << ';';

    convert(Vxt, arr);
    file  << int(Vxt) << ',' << arr[0] << arr[1] << arr[2] << ';';
    convert(Vyt, arr);
    file << int(Vyt) << ',' << arr[0] << arr[1] << arr[2] << ';' ;
    convert(Vzt, arr);
    file << int(Vzt) << ',' << arr[0] << arr[1] << arr[2] << std::endl;


    Vxt= Vx + ax*T_poleta;
    Vyt= Vy + ay*T_poleta;
    Vzt= Vz + az*T_poleta;

    convert(T_poleta, arr);
    file << int(T_poleta) << ',' << arr[0] << arr[1] << arr[2] << ';'; 

    convert(Xd, arr);
    file << int(Xd) << ',' << arr[0] << arr[1] << arr[2] << ';';
    convert(Yd, arr);
    file << int(Yd) << ',' << arr[0] << arr[1] << arr[2] << ';' ;
    convert(Zd, arr);
    file << int(Zd) << ',' << arr[0] << arr[1] << arr[2] << ';';

    convert(Vxt, arr);
    file  << int(Vxt) << ',' << arr[0] << arr[1] << arr[2] << ';';
    convert(Vyt, arr);
    file << int(Vyt) << ',' << arr[0] << arr[1] << arr[2] << ';' ;
    convert(Vzt, arr);
    file << int(Vzt) << ',' << arr[0] << arr[1] << arr[2] << std::endl;

   

    file.close();
}