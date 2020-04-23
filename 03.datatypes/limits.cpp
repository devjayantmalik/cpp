#include <iostream>
#include <limits>

int main(){
    // check the max and min that an integer could store
    int maximum = std::numeric_limits<int>::max();
    
    // std:: namespace
    // numeric_limits<int>
    // max(): function
    
    std::cout << "Maximum of Integer: " << maximum << std::endl;
    
    std::cout << "Max Float: " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "Max Float: " << std::numeric_limits<float>::min() << std::endl;
    
    
    
    return 0;
}
