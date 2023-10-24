#include <iostream>

int isCenteredArray(int arr[], int size) {
    // Check if the array has an odd number of elements
    if (size % 2 == 0) {
        return 0;
    }

    // Find the middle element
    int middleIndex = size / 2;
    int middleElement = arr[middleIndex];

    // Check if all elements (except middle) are strictly greater than the middle element
    for (int i = 0; i < size; i++) {
        if (i != middleIndex && arr[i] <= middleElement) {
            return 0;
        }
    }

    return 1;
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

    int result = isCenteredArray(arr, size);
    std::cout << "The array is centered: " << result << std::endl;

    return 0;
}