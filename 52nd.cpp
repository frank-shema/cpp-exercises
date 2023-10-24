#include <iostream>
#include <vector>

std::vector<int> fill(int arr[], int k, int n) {
    if (k <= 0 || n <= 0) {
        return {};
    }

    std::vector<int> arr2;
    for (int i = 0; i < n; i++) {
        arr2.push_back(arr[i % k]);
    }

    return arr2;
}

int main() {
    int k, n;
    std::cout << "Enter the value of k: ";
    std::cin >> k;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int arr[k];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < k; i++) {
        std::cin >> arr[i];
    }

    std::vector<int> result = fill(arr, k, n);
    std::cout << "The filled array is: ";
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}