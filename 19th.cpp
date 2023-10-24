#include <iostream>
using namespace std;

void printAscendingOrder(int a, int b, int c) {
    if (a <= b && a <= c) {
        cout << a << " ";
        if (b <= c) {
            cout << b << " " << c << endl;
        } else {
            cout << c << " " << b << endl;
        }
    } else if (b <= a && b <= c) {
        cout << b << " ";
        if (a <= c) {
            cout << a << " " << c << endl;
        } else {
            cout << c << " " << a << endl;
        }
    } else {
        cout << c << " ";
        if (a <= b) {
            cout << a << " " << b << endl;
        } else {
            cout << b << " " << a << endl;
        }
    }
}

int main() {
    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    printAscendingOrder(num1, num2, num3);

    return 0;
}