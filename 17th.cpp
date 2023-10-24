#include <iostream>
using namespace std;

const double PI = 3.14159;

double calculateArea(double radius) {
    return PI * radius * radius;
}

double calculateCircumference(double radius) {
    return 2 * PI * radius;
}

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = calculateArea(radius);
    double circumference = calculateCircumference(radius);

    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;

    return 0;
}