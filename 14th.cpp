#include <iostream>
using namespace std;

void checkNumber(int num) {
    if (num > 0) {
        cout << "Positive" << endl;
    } else if (num < 0) {
        cout << "Negative" << endl;
    } else {
        cout << "Zero" << endl;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    checkNumber(num);

    return 0;
}