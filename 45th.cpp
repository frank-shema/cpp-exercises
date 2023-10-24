#include <iostream>

int isDigitSum(int n, int m) {
    if (n < 0 || m < 0) {
        return -1;
    }

    int digitSum = 0;
    while (n > 0) {
        digitSum += n % 10;
        n /= 10;
    }

    if (digitSum < m) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n, m;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::cout << "Enter another integer: ";
    std::cin >> m;

    int result = isDigitSum(n, m);
    std::cout << "The sum of digits of " << n << " is less than " << m << ": " << result << std::endl;

    return 0;
}