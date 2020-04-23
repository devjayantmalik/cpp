//  Types available
/*
 *  int, char, float, double, long, string,
 *  void, auto  
 *  array, pointer, enum, structure
*/

#include <iostream>

using namespace std;
int main(int argc, const char **argv){
    /*
    cout << "Number of arguments passed: " << argc << endl;
    
    for(int i =0; i< argc; i++){
        cout << "Argument is: " << argv[i] << endl;
    }
    
    */
    
    // Integers: 1, 2, 3.....n
    int number = 20;
    cout << number << endl;
    
    char grade = 'A';
    cout << grade << endl;
    
    float salary = 10000.23;
    cout << salary << endl;
    
    double money = 12.32;
    cout << money << endl;
    
    long double maximum = 12030.01;
    cout << maximum << endl;
    
    
    // precision
    float num1 = 1.11111111111111111111;
    float num2 = 1.11111111111111111111;
    printf("Float sum: %.20f\n", num1 + num2);
    
    double num3 = 1.11111111111111111111;
    double num4 = 1.11111111111111111111;
    printf("Double sum: %.20f\n", num3 + num4);
    
    // strings
    string name2 = "Jayant\0 Malik";
    cout << name2 << endl;
    printf("%s\n", name2.c_str());
    
    // auto type inference
    auto name3 = "Jayant Malik";
    auto num5 = 1020;
    
    char * grade2;
    char grade3 = 'C';
    
    grade2 = &grade3;
    printf("%p\n", &grade3); 
    
    
    return 0;
}
