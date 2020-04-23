#include <iostream>

// Enums: That provides names to numerical values.
/*
1 : Sunday
2 : Monday
....
7 : Saturday
*/

enum days_of_week{Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
enum employees{Ram = 1000, Shyam = 1001, Jayant = 3000};


int main(){
    enum days_of_week day;
    day = Saturday;
    std::cout << day << std::endl;
    
    // print the value of enum
    std::cout << Ram << std::endl;
    
    // using enum values in loop
    for(int i = Ram; i < Jayant; i++){
        std::cout << i << std::endl;
    }
    
    return 0;
}
