#include <iostream>
#include <fstream>

int main(){

    std::ofstream file("file.csv");

    double Vx, Vy, Vz, ax, ay, az, dt;
    std::cin >> Vx >> Vy >> Vz;
    std::cin >> ax >> ay >> az;
    std::cin >> dt;

    file << "Vx;Vy;Vz;ax;ay;az;dt" << std::endl;
    file << Vx << ';' << Vy << ';' << Vz << ';' << ax << ';' << ay << ';' << az << ';' << dt << std::endl;
    file << std::endl;


    double X, Y, Z;
    double H_max, T_up;

    H_max = Vy*Vy / (2*abs(ay)); 
    T_up = Vy/abs(ay);

    X= Vx*T_up + ax*T_up*T_up/2;
    Y= H_max;
    Z= Vz*T_up + az*T_up*T_up/2;

    file << "1. Point with max height:; " << X << ';' << Y << ';' << Z << std::endl;




    file << "2. Max height time:; " << T_up << std::endl;



    double T_fly = 2 * T_up; 

    file << "3. Time of fly:; " << T_fly << std::endl;


    Y= 0;
    X= Vx*T_fly + ax*T_fly*T_fly/2;
    Z= Vz*T_fly + az*T_fly*T_fly/2;

    file << "4. Coord point of douw:; " << X << ';' << Y << ';' << Z << std::endl;



    double Xt, Yt, Zt, Vxt, Vyt, Vzt;
    file << "5. Tab: " << std::endl;
    file << "tx ;X ;Vx ;Y ;Vy ;Z ;Vz" << std::endl;
    for (double t = 0; t<(T_fly-dt/2); t+=dt){

        Xt= Vx*t + (ax*t*t)/2; 
        Vxt= Vx + ax*t;
    
        Yt= Vy*t + (ay*t*t)/2; 
        Vyt= Vy + ay*t;
    
        Zt= Vz*t + (az*t*t)/2; 
        Vzt= Vz + az*t;

        file << t << ";" << Xt << ";" << Vxt << ";" << Yt << ";" << Vyt << ";" << Zt << ";" << Vzt << std::endl;
    }
    file << std::endl;

    Xt= Vx*T_up + (ax*T_up*T_up)/2;
    Vxt= Vx + ax*T_up;
    Yt= Vy*T_up + (ay*T_up*T_up)/2;
    Vyt= Vy + ay*T_up;
    Zt= Vz*T_up + (az*T_up*T_up)/2;
    Vzt= Vz + az*T_up;

    file << T_up << ";" << Xt << ";" << Vxt << ";" << Yt << ";" << Vyt << ";" << Zt << ";" << Vzt << std::endl;

    Vxt= Vx + ax*T_fly;
    Vyt= Vy + ay*T_fly;
    Vzt= Vz + az*T_fly;

    file << T_fly << ";" << X << ";" << Vxt << ";" << Y << ";" << Vyt << ";" << Z << ";" << Vzt << std::endl;
    file.close();
}