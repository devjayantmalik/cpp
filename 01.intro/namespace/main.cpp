#include <iostream>
#include "backend.cpp"


int sum(int num1, int num2){
    return num1 + num2;
}


int main(){
    // code will output sum of 10 and 20
    std::cout << sum(10, 20) << std::endl;
    
    return 0;
}
