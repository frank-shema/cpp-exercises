#include <iostream>

int isNormal(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0 && i % 2 == 1) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    int result = isNormal(num);
    if (result == 1) {
        std::cout << "The number is normal." << std::endl;
    } else {
        std::cout << "The number is not normal." << std::endl;
    }

    return 0;
}
