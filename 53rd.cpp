#include <iostream>

int isHollow(int a[], int len) {
    if (len < 3) {
        return 0;
    }

    int start = -1;
    int end = -1;
    int zeroCount = 0;

    for (int i = 0; i < len; i++) {
        if (a[i] == 0) {
            zeroCount++;
            if (zeroCount == 1) {
                start = i;
            } else if (zeroCount == 3) {
                end = i;
            }
        }
    }

    if (zeroCount == 3 && start == end - 2 && start > 0 && end < len - 1) {
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

    int result = isHollow(arr, len);
    std::cout << "The array is a hollow array: " << result << std::endl;

    return 0;
}