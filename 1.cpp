#include <iostream>

class Circle {
private:
    double radius;

public:
    // Constructor
    Circle(double r) {
        radius = r;
    }

    // Member function to calculate the area
    double calculateArea() {
        return 3.14159 * radius * radius;
    }

    // Member function to calculate the circumference
    double calculateCircumference() {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    // Create an instance of Circle with radius 5
    Circle circle(5);

    // Calculate and display the area
    double area = circle.calculateArea();
    std::cout << "Area of the circle: " << area << std::endl;

    // Calculate and display the circumference
    double circumference = circle.calculateCircumference();
    std::cout << "Circumference of the circle: " << circumference << std::endl;

    return 0;
}