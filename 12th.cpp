#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    double fahrenheit = celsiusToFahrenheit(celsius);

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}