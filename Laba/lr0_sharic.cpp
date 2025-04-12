#include <iostream>
#include <fstream>

int main(){

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
    file << ';' << Vx << ';' << Vy << ';' << Vz << ';' << ax << ';' << ay << ';' << az << ';' << dt << std::endl;
    file << std::endl;
    file << " ;x;y;z" << std::endl;
    file << "Max_height:; " << X << ";" << Y << ';' << Z << std::endl;
    file << "Max_height_time:; " << T_up << std::endl;
    file << "Fly_time:; " << T_poleta << std::endl;
    file << "Coord_down:; " << Xd << ";" << Yd << ';' << Zd << std::endl;
    file << std::endl;

    double Xt, Yt, Zt, Vxt, Vyt, Vzt;
    file << "time" << ';' << "x" << ';' << "y" << ';' << "z" << ';' << "Vx" << ';' << "Vy" << ';' << "Vz" << std::endl;
    for (double t = 0; t<T_poleta; t+=dt){
        Xt= Vx*t + (ax*t*t)/2; 
        Vxt= Vx + ax*t;
    
        Yt= Vy*t + (ay*t*t)/2; 
        Vyt= Vy + ay*t;
    
        Zt= Vz*t + (az*t*t)/2; 
        Vzt= Vz + az*t;

        file << t << ';' << Xt << ';' << Yt << ';' << Zt << ';' << Vxt << ';' << Vyt << ';' << Vzt << std::endl;


    }
    file << std::endl;

    Vxt= Vx + ax*T_up; 
    Vyt= Vy + ay*T_up;
    Vzt= Vz + az*T_up;

    file << T_up << ';' << X << ';' << Y << ';' << Z << ';' << Vxt << ';' << Vyt << ';' << Vzt << std::endl;

    Vxt= Vx + ax*T_poleta;
    Vyt= Vy + ay*T_poleta;
    Vzt= Vz + az*T_poleta;

    file << T_poleta << ';' << Xd << ';' << Yd << ';' << Zd << ';' << Vxt << ';' << Vyt << ';' << Vzt << std::endl;
   

    file.close();
}