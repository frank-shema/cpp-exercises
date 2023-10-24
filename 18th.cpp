#include <iostream>
using namespace std;

double computeCubeVolume(double side) {
    return side * side * side;
}

int main() {
    double side;
    cout << "Enter the side length of the cube: ";
    cin >> side;

    double volume = computeCubeVolume(side);

    cout << "Volume of the cube: " << volume << endl;

    return 0;
}