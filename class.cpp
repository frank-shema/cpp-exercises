#include <iostream>
#include <stdio.h>

class Rectangle {
    private:
        int width;
        int length;
    
    public:
        int area() {
            return width * length;
        }
        
        void set_Values(int w, int l) {
            width = w;
            length = l;
        }
        
        int perimeter() {
            return (length + width) * 2;
        }
};

int main() {
    Rectangle rect;
    rect.set_Values(5, 10);
    
    std::cout << "The area is " << rect.area() << std::endl;
    std::cout << "The perimeter is " << rect.perimeter() << std::endl;
    
    return 0;
}   