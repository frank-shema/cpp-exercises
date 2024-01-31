#include <iostream>

class Triangle {
private:
    double side1;
    double side2;
    double side3;

public:
    // Constructor
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // Member function to determine the type of triangle
    void determineType() {
        if (side1 == side2 && side2 == side3) {
            std::cout << "Equilateral triangle" << std::endl;
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            std::cout << "Isosceles triangle" << std::endl;
        } else {
            std::cout << "Scalene triangle" << std::endl;
        }
    }
};

int main() {
    // Create an instance of Triangle with side lengths 5, 5, and 5
    Triangle triangle1(5, 5, 5);
    triangle1.determineType();

    // Create an instance of Triangle with side lengths 4, 5, and 6
    Triangle triangle2(4, 5, 6);
    triangle2.determineType();

    return 0;
}