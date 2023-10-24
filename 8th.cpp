#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long product = 1;
    for (int i = 2; i <= 100; ++i) {
        if (isPrime(i)) {
            product *= i;
        }
    }

    cout << "The product of prime numbers between 1 and 100 is: " << product << endl;

    return 0;
}