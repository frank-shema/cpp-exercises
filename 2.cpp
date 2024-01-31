#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Member function to calculate the area
    double calculateArea() {
        return length * width;
    }

    // Member function to calculate the perimeter
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    // Create an instance of Rectangle with length 5 and width 3
    Rectangle rectangle(5, 3);

    // Calculate and display the area
    double area = rectangle.calculateArea();
    std::cout << "Area of the rectangle: " << area << std::endl;

    // Calculate and display the perimeter
    double perimeter = rectangle.calculatePerimeter();
    std::cout << "Perimeter of the rectangle: " << perimeter << std::endl;

    return 0;
}