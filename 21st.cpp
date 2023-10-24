#include <iostream>
using namespace std;

int main() {
    long long johnSeconds = 1000000000;
    long long secondsInYear = 365 * 24 * 60 * 60;

    long long johnYears = johnSeconds / secondsInYear;

    cout << "John is " << johnYears << " years old." << endl;

    return 0;
}