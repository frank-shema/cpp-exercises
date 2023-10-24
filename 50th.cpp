#include <iostream>
#include <unordered_set>
#include <vector>
#include <climits>

int isComplete(const std::vector<int>& arr) {
    std::unordered_set<int> numSet;

    int minEven = INT_MAX;
    int maxEven = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            minEven = std::min(minEven, arr[i]);
            maxEven = std::max(maxEven, arr[i]);
            numSet.insert(arr[i]);
        }
    }

    if (minEven == maxEven) {
        return 0;
    }

    for (int i = minEven + 1; i < maxEven; i++) {
        if (numSet.count(i) == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int len;
    std::cout << "Enter the size of the array: ";
    std::cin >> len;

    std::vector<int> arr(len);
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < len; i++) {
        std::cin >> arr[i];
    }

    int result = isComplete(arr);
    std::cout << "The array is a complete array: " << result << std::endl;

    return 0;
}
