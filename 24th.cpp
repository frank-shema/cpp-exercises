#include <iostream>
using namespace std;

void wordCount(string str) {
    int charactersWithoutSpaces = 0;
    int charactersWithSpaces = 0;
    int wordCount = 0;

    for (char c : str) {
        if (c != ' ') {
            charactersWithoutSpaces++;
        }
        charactersWithSpaces++;

        if (c == ' ') {
            wordCount++;
        }
    }
    wordCount++; // Adding 1 for the last word

    cout << "Number of characters without spaces: " << charactersWithoutSpaces << endl;
    cout << "Number of characters with spaces: " << charactersWithSpaces << endl;
    cout << "Number of words: " << wordCount << endl;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    wordCount(input);

    return 0;
}