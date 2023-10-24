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

int isPrimeProduct(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0 && isPrime(i) && isPrime(n / i)) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int result = isPrimeProduct(n);
    std::cout << "The number is a prime product: " << result << std::endl;

    return 0;
}