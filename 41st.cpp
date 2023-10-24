#include <iostream>
#include <unordered_set>

int isOddValent(int arr[], int len) {
    std::unordered_set<int> seen;
    int oddFound = 0;

    for (int i = 0; i < len; i++) {
        if (seen.find(arr[i]) != seen.end()) {
            oddFound = 1;
        }
        if (arr[i] % 2 == 1) {
            oddFound = 1;
        }
        seen.insert(arr[i]);
    }

    return oddFound;
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

    int result = isOddValent(arr, len);
    if (result == 1) {
        std::cout << "The array is odd-valent." << std::endl;
    } else {
        std::cout << "The array is not odd-valent." << std::endl;
    }

    return 0;
}
