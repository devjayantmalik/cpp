// we will count sum of 0, 10,00,000 numbers
#include <iostream>
#include <chrono>


int main(){
    // get the current time and store it in start variable
    auto start = std::chrono::system_clock::now();
    
    long double sum = 0;
    // perform the calculations
    for(long int i = 0; i < 1000000; i++){
        sum += i;
    }
    
    // get the current time and store it in end variable
    auto end = std::chrono::system_clock::now();
    
    // calculate the time difference
    std::chrono::duration<double> elapsed = end - start;
    
    // print the output or time difference.
    std::cout << "The program finished in " << elapsed.count() << " seconds\n";
    
    return 0;
}
