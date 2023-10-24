#include <iostream>
#include <string>

int countDigit(int num, int digit) {
    if (num < 0 || digit < 0) {
        return -1;
    }
    std::string numStr = std::to_string(num);
    int count = 0;
    for (char c : numStr) {
        if (c - '0' == digit) {
            count++;
        }
    }
    return count;
}

int main() {
    int num, digit;
    std::cout << "Enter a positive number: ";
    std::cin >> num;
    std::cout << "Enter a digit: ";
    std::cin >> digit;

    int digitCount = countDigit(num, digit);
    std::cout << "The digit " << digit << " appears " << digitCount << " times in the number " << num << std::endl;

    return 0;
}