#include <iostream>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int nthPrime(int n) {
    int count = 0;
    int num = 2;
    while (count < n) {
        if (isPrime(num)) {
            count++;
        }
        num++;
    }
    return num - 1;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int nthPrimeNumber = nthPrime(n);
    std::cout << "The " << n << "th prime number is: " << nthPrimeNumber << std::endl;

    return 0;
}