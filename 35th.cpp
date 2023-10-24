#include <iostream>

int difference(int arr[], int size) {
    int sumOdd = 0;
    int sumEven = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }

    return sumOdd - sumEven;
}

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    int result = difference(arr, size);
    std::cout << "The difference of the sum of odd and even numbers is: " << result << std::endl;

    return 0;
}
