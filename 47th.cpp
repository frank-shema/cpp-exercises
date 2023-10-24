#include <iostream>
#include <unordered_set>

int isBalanced(int arr[], int len) {
    std::unordered_set<int> numSet;

    for (int i = 0; i < len; i++) {
        numSet.insert(arr[i]);
    }

    for (int i = 0; i < len; i++) {
        if (numSet.count(-arr[i]) == 0) {
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

    int result = isBalanced(arr, len);
    std::cout << "The array is a balanced array: " << result << std::endl;

    return 0;
}