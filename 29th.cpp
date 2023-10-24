#include <iostream>
#include <algorithm>
using namespace std;

void removeSpaces(string& str) {
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    removeSpaces(input);

    cout << "String without spaces: " << input << endl;

    return 0;
}