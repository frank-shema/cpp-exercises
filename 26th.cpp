#include <iostream>
using namespace std;

int stringLength(string str) {
    int length = 0;
    int index = 0;
    while (str[index] != '\0') {
        length++;
        index++;
    }
    return length;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int length = stringLength(input);

    cout << "Length of the string: " << length << endl;

    return 0;
}