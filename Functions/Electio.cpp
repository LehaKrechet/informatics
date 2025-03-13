 #include <iostream>

 int Election(bool x, bool y, bool z){
    bool res = 0;
    if (x && y){
        res = 1;
    }else if (x && z){
        res = 1;
    }else if (y && z){
        res = 1;
    }
    return res;

 }

 int main(){
    bool x, y, z;
    std::cin >> x >> y >> z;
    std::cout << Election(x, y, z);
 }