#include <iostream>

// convert a function into template
// template functions in cpp
template <class T> T add(T num1, T num2){
    return num1 + num2;
}


int main(){
    // sum of 10 and 20
    std::cout << add<int>(10, 20) << std::endl;
    
    // sum of 10.22 and 34.22
    std::cout << add<double>(10.22, 34.22) << std::endl;
    
    // sum of 10.22 and 34.22
    std::cout << add<std::string>("Jayant", " Malik") << std::endl;
    
    
    return 0;
}
