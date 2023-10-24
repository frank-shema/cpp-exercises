#include <iostream>
#include <algorithm>
using namespace std;

void convertToUppercase(string& str) {
    transform(str.begin(), str.end(), str.begin(), ::toupper);
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    convertToUppercase(input);

    cout << "Uppercase string: " << input << endl;

    return 0;
}