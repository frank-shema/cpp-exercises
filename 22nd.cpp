#include <iostream>
using namespace std;

int countSpaces(string str) {
    int count = 0;
    for (char c : str) {
        if (c == ' ') {
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int spaces = countSpaces(input);

    cout << "Number of spaces: " << spaces << endl;

    return 0;
}