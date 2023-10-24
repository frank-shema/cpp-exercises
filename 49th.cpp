#include <iostream>
#include <vector>

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

int isMagicArray(int arr[], int len) {
    int sumOfPrimes = 0;
    for (int i = 0; i < len; i++) {
        if (isPrime(arr[i])) {
            sumOfPrimes += arr[i];
        }
    }

    if (sumOfPrimes == arr[0]) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int len;
    std::cout << "Enter the size of the array: ";
    std::cin >> len;

    int arr[len];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < len; i++) {
        std::cin >> arr[i];
    }

    int result = isMagicArray(arr, len);
    std::cout << "The array is a Magic array: " << result << std::endl;

    return 0;
}