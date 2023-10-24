#include <iostream>

int isDaphne(int arr[], int len) {
    bool hasOdd = false;
    bool hasEven = false;

    for (int i = 0; i < len; i++) {
        if (arr[i] % 2 == 0) {
            hasEven = true;
        } else {
            hasOdd = true;
        }
    }

    if (hasOdd && !hasEven) {
        return 1;
    } else if (!hasOdd && hasEven) {
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

    int result = isDaphne(arr, len);
    std::cout << "The array is a Daphne array: " << result << std::endl;

    return 0;
}