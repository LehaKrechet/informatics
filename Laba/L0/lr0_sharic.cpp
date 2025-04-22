#include <iostream>
#include <fstream>
#include <cmath>

void convert(double number, int arr[3]){
    int drob = int((fabs(number)+1 - int(fabs(number))) * 1000);
    arr[0] = abs((drob / 100) % 10);
    arr[1] = abs((drob / 10) % 10);
    arr[2] = abs(drob % 10);

}
char sign(double number){
    if (number < 0 && int(number) == 0){
        return '-';
    }
    return ' ';
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
    file << "Max_height:; " << sign(X) << int(X) << ',' << arr[0] << arr[1] << arr[2] << ';';
    convert(Y, arr);
    file << int(Y) << ',' << arr[0] << arr[1] << arr[2] << ';' ;
    convert(Z, arr);
    file << sign(Z) << int(Z) << ',' << arr[0] << arr[1] << arr[2] << std::endl;

    convert(T_up, arr);
    file << "Max_height_time:; " << int(T_up) << ',' << arr[0] << arr[1] << arr[2] << std::endl;

    convert(T_poleta, arr);
    file << "Fly_time:; " << int(T_poleta)  << ',' << arr[0] << arr[1] << arr[2] << std::endl;

    convert(Xd, arr);
    file << "Coord_down:; " << sign(Xd) << int(Xd)   << ',' << arr[0] << arr[1] << arr[2] << ';';
    convert(Yd, arr);
    file << sign(Yd) << int(Yd) << ',' << arr[0] << arr[1] << arr[2] << ';' ;
    convert(Zd, arr);
    file << sign(Zd) << int(Zd) << ',' << arr[0] << arr[1] << arr[2] << std::endl;

    file << std::endl;

    double Xt, Yt, Zt, Vxt, Vyt, Vzt;
    file << "time" << ';' << "x" << ';' << "y" << ';' << "z" << ';' << "Vx" << ';' << "Vy" << ';' << "Vz" << std::endl;
    for (double t = 0+dt; t<T_poleta; t+=dt){
        Xt= Vx*t + (ax*t*t)/2; 
        Vxt= Vx + ax*t;
    
        Yt= Vy*t + (ay*t*t)/2; 
        Vyt= Vy + ay*t;
    
        Zt= Vz*t + (az*t*t)/2; 
        Vzt= Vz + az*t;

        convert(t, arr);
        file << int(t + 0.0000000001) << ',' << arr[0] << arr[1] << arr[2] << ';'; 

        convert(Xt, arr);
        file << sign(Xt) << int(Xt)  << ',' << arr[0] << arr[1] << arr[2] << ';';
        convert(Yt, arr);
        file << sign(Yt) << int(Yt)  << ',' << arr[0] << arr[1] << arr[2] << ';' ;
        convert(Zt, arr);
        file << sign(Zt) << int(Zt)  << ',' << arr[0] << arr[1] << arr[2] << ';';

        convert(Vxt, arr);
        file << sign(Vxt) << int(Vxt)  << ',' << arr[0] << arr[1] << arr[2] << ';';
        convert(Vyt, arr);
        file << sign(Vyt) << int(Vyt)  << ',' << arr[0] << arr[1] << arr[2] << ';' ;
        convert(Vzt, arr);
        file << sign(Vzt) << int(Vzt)  << ',' << arr[0] << arr[1] << arr[2] << std::endl;



    }
    file << std::endl;

    Vxt= Vx + ax*T_up; 
    Vyt= Vy + ay*T_up;
    Vzt= Vz + az*T_up;

    convert(T_up, arr);
    file << int(T_up) << ',' << arr[0] << arr[1] << arr[2] << ';'; 

    convert(X, arr);
    file << sign(X) << int(X)  << ',' << arr[0] << arr[1] << arr[2] << ';';
    convert(Y, arr);
    file << sign(Y) << int(Y)  << ',' << arr[0] << arr[1] << arr[2] << ';' ;
    convert(Z, arr);
    file << sign(Z) << int(Z)  << ',' << arr[0] << arr[1] << arr[2] << ';';

    convert(Vxt, arr);
    file << sign(Vxt) <<int(Vxt)  << ',' << arr[0] << arr[1] << arr[2] << ';';
    convert(Vyt, arr);
    file << sign(Vyt) <<int(Vyt)  << ',' << arr[0] << arr[1] << arr[2] << ';' ;
    convert(Vzt, arr);
    file << sign(Vzt) <<int(Vzt)  << ',' << arr[0] << arr[1] << arr[2] << std::endl;


    Vxt= Vx + ax*T_poleta;
    Vyt= Vy + ay*T_poleta;
    Vzt= Vz + az*T_poleta;

    convert(T_poleta, arr);
    file << int(T_poleta) << ',' << arr[0] << arr[1] << arr[2] << ';'; 

    convert(Xd, arr);
    file << sign(Xd) << int(Xd)  << ',' << arr[0] << arr[1] << arr[2] << ';';
    convert(Yd, arr);
    file << sign(Yd) << int(Yd)  << ',' << arr[0] << arr[1] << arr[2] << ';' ;
    convert(Zd, arr);
    file << sign(Zd) << int(Zd)  << ',' << arr[0] << arr[1] << arr[2] << std::endl;

    convert(Vxt, arr);
    file << sign(Vxt) << int(Vxt)  << ',' << arr[0] << arr[1] << arr[2] << ';';
    convert(Vyt, arr);
    file << sign(Vyt) << int(Vyt)  << ',' << arr[0] << arr[1] << arr[2] << ';' ;
    convert(Vzt, arr);
    file << sign(Vzt) << int(Vzt)  << ',' << arr[0] << arr[1] << arr[2] << std::endl;

   

    file.close();
}