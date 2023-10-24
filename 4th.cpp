#include <iostream>
using namespace std;

void swapNumbers(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;
    cout << "Input 1st number: ";
    cin >> num1;
    cout << "Input 2nd number: ";
    cin >> num2;

    cout << "Before swapping, the 1st number is: " << num1 << endl;
    cout << "Before swapping, the 2nd number is: " << num2 << endl;

    swapNumbers(num1, num2);

    cout << "After swapping, the 1st number is: " << num1 << endl;
    cout << "After swapping, the 2nd number is: " << num2 << endl;

    return 0;
}