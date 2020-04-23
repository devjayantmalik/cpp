#include <iostream>

// Struct : Public
// Classes : Private


// create a structure
struct Rectangle{
    double length = 0;
    double breadth = 0;
    
    Rectangle(double length = 0, double breadth = 0){
        // update the values of rectangle struct.
        this->length = length;
        this->breadth = breadth;
    }
    
    double area(){
        return length * breadth;
    }
    
    double perimeter(){
        return 2 * (length + breadth);
    }
};

typedef struct Rectangle Rectangle;

int main(){
    
    Rectangle rect1(10, 20);
    
    // changing default length and breath of rectangle.
    // rect1.length = 10;
    // rect1.breadth = 20;
    
    // getting area.
    std::cout << rect1.area() << std::endl;
    
    return 0;
}
