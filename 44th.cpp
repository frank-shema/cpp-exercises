#include <iostream>

int isFilter(int a[], int len) {
    bool contains9 = false;
    bool contains7 = false;

    for (int i = 0; i < len; i++) {
        if (a[i] == 9) {
            contains9 = true;
        }
        if (a[i] == 7) {
            contains7 = true;
        }
        if (contains9 && contains7) {
            return 0;
        }
    }

    return (contains9 && !contains7) ? 1 : 0;
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

    int result = isFilter(arr, len);
    std::cout << "The array is a Filter array: " << result << std::endl;

    return 0;
}