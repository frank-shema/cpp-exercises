#include <iostream>
#include <algorithm>
using namespace std;

void reverseString(string& str) {
    reverse(str.begin(), str.end());
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    reverseString(input);

    cout << "Reversed string: " << input << endl;

    return 0;
}