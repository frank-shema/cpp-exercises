#include <iostream>
#include <vector>

int isAllPossibilities(int arr[], int len) {
    std::vector<int> possibilities(len, 0);

    for (int i = 0; i < len; i++) {
        if (arr[i] < 0 || arr[i] >= len) {
            return 0;
        }
        possibilities[arr[i]] = 1;
    }

    for (int i = 0; i < len; i++) {
        if (possibilities[i] == 0) {
            return 0;
        }
    }

    return 1;
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

    int result = isAllPossibilities(arr, len);
    if (result == 1) {
        std::cout << "The array is an array of all possibilities." << std::endl;
    } else {
        std::cout << "The array is not an array of all possibilities." << std::endl;
    }

    return 0;
}
