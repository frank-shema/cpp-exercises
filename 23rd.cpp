#include <iostream>
using namespace std;

bool isDigitOrAlpha(char c) {
    return isdigit(c) || isalpha(c);
}

int main() {
    char input;
    cout << "Enter a character: ";
    cin >> input;

    if (isDigitOrAlpha(input)) {
        cout << "The character is a digit or alphabetic letter." << endl;
    } else {
        cout << "The character is not a digit or alphabetic letter." << endl;
    }

    return 0;
}