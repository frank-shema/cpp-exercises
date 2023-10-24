#include <iostream>

int calculateDifference(int n) {
    int sumOfSquares = 0;
    int squareOfSum = 0;
    for (int i = 1; i <= n; i++) {
        sumOfSquares += i * i;
        squareOfSum += i;
    }
    squareOfSum *= squareOfSum;
    return squareOfSum - sumOfSquares;
}

int main() {
    int n;
    std::cout << "Enter the value of N: ";
    std::cin >> n;

    int difference = calculateDifference(n);
    std::cout << "The difference between the square of the sum and the sum of the squares of the first " << n << " natural numbers is: " << difference << std::endl;

    return 0;
}