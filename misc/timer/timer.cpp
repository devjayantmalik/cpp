#include <iostream>
#include <chrono>
#include <ctime>

int main(){
    auto start = std::chrono::system_clock::now();
    
    long double addition = 0;
    
    for(long int i=0; i<1000000; i++){
        addition += i;
    }
    
    auto end = std::chrono::system_clock::now();
    
    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Program finished in " << elapsed.count() << "seconds\n";
    return 0;
}
