#include <iostream>

int isBean(int a[], int len) {
    bool contains9 = false;
    bool contains7 = false;
    bool contains13 = false;
    bool contains16 = false;

    for (int i = 0; i < len; i++) {
        if (a[i] == 9) {
            contains9 = true;
        }
        if (a[i] == 7) {
            contains7 = true;
        }
        if (a[i] == 13) {
            contains13 = true;
        }
        if (a[i] == 16) {
            contains16 = true;
        }
    }

    if ((contains9 && !contains13) || (contains7 && contains16)) {
        return 0;
    } else {
        return 1;
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

    int result = isBean(arr, len);
    std::cout << "The array is a Bean array: " << result << std::endl;

    return 0;
}