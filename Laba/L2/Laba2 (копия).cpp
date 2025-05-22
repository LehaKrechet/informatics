#include <iostream>
#include <ctime>


int phiRec(int n){
    if (n==1){
        return 1;
    }else if (n==0){
        return 0;
    } else {
        return  phiRec(n-1) + phiRec(n-2);
    }
}
void phiNoRec(int first,int second,int n){
    
    int next, countNum=1;
    while (countNum<n){
        next=first+second;
        first=second;
        second=next;
        countNum+=1;
    }
   
}
int TriRec(int n){
    if (n==0) {
        return 0;
    } else if (n==1){
        return 0;
    }else if (n == 2){
        return 1;
    }else{
        return TriRec(n-1) + TriRec(n-2) + TriRec(n-3);
    }
}
void TriNoRec(int first,int second,int third,int n){
    
    int next, countNum=1;
    while (countNum<(n-1)){
        next=first+second+third;
        first=second;
        second=third;
        third=next;
        countNum+=1;
    }
}
int main(){
 int n, first=0, second=1, third=1, countNum=1;
 std::cin >> n;

 int start =  clock(); 
 std::cout << phiRec(n);
 int end = clock(); 
 double time = double(end - start) / CLOCKS_PER_SEC;
 std::cout << "Phibonachi recursion time: " << time << " miliseconds." << std::endl;

 start =  clock();  
 phiNoRec(first,second,n);
 end = clock(); 
 time = double(end - start) / CLOCKS_PER_SEC;
 std::cout << "Phibonachi no recursion time: " << time << " miliseconds." << std::endl;
 countNum=1;
 start =  clock(); 
 std::cout << TriRec(n);
 end = clock(); 
 time = double(end - start) / CLOCKS_PER_SEC;
 std::cout << "Tribonachi recursion time: " << time << " miliseconds." << std::endl;

 start =  clock();  
 TriNoRec(first,second,third,n);
 end = clock();  
 time = double(end - start) / CLOCKS_PER_SEC;
 std::cout << "Tribonachi no recursion time: " << time << " miliseconds." << std::endl;
}