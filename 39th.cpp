#include <iostream>

int countOnes(int n) {
    int count = 0;

    while (n > 0) {
        if (n % 2 == 1) {
            count++;
        }
        n /= 2;
    }

    return count;
}

int main() {
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    int result = countOnes(num);
    std::cout << "Number of ones in the binary representation: " << result << std::endl;

    return 0;
}
