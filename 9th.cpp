#include <iostream>
#include <cmath>
using namespace std;

void findHypotenusePairs() {
    int count = 0;
    for (int a = 2; a < 100; ++a) {
        for (int b = a; b < 100; ++b) {
            int c = sqrt(a * a + b * b);
            if (c * c == a * a + b * b) {
                cout << "(" << a << ", " << b << ")" << endl;
                count++;
            }
        }
    }
    cout << "Total pairs found: " << count << endl;
}

int main() {
    findHypotenusePairs();

    return 0;
}