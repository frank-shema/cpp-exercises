#include <iostream>
using namespace std;

namespace arithmetic {
    int add(int a, int b) {
        return a + b;
    }
    int subtract(int a, int b) {
        return a - b;
    }
    int multiply(int a, int b) {
        return a * b;
    }
    int divide(int a, int b) {
        return a / b;
    }
    int modulus(int a, int b) {
        return a % b;
    }
}

int main() {
    char choice;
    do {
        cout << "MENU" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Modulus" << endl;
        cout << "Enter your choice: ";
        int operation;
        cin >> operation;
        cout << "Enter your two numbers: ";
        int a, b;
        cin >> a >> b;
        int result;
        switch (operation) {
            case 1:
                result = arithmetic::add(a, b);
                break;
            case 2:
                result = arithmetic::subtract(a, b);
                break;
            case 3:
                result = arithmetic::multiply(a, b);
                break;
            case 4:
                result = arithmetic::divide(a, b);
                break;
            case 5:
                result = arithmetic::modulus(a, b);
                break;
            default:
                cout << "Invalid choice" << endl;
                continue;
        }
        cout << "Result: " << result << endl;
        cout << "Continue? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}