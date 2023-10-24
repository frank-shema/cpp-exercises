#include <iostream>
#include <vector>

std::vector<int> findCommonElements(int arr1[], int size1, int arr2[], int size2) {
    std::vector<int> commonElements;
    
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                commonElements.push_back(arr1[i]);
                break;  // Once a common element is found, break to avoid duplicates
            }
        }
    }
    
    return commonElements;
}

int main() {
    int size1, size2;
    std::cout << "Enter the size of the first array: ";
    std::cin >> size1;

    int arr1[size1];
    std::cout << "Enter the elements of the first array: ";
    for (int i = 0; i < size1; i++) {
        std::cin >> arr1[i];
    }

    std::cout << "Enter the size of the second array: ";
    std::cin >> size2;

    int arr2[size2];
    std::cout << "Enter the elements of the second array: ";
    for (int i = 0; i < size2; i++) {
        std::cin >> arr2[i];
    }

    std::vector<int> commonElements = findCommonElements(arr1, size1, arr2, size2);
    
    std::cout << "Common elements: ";
    for (int element : commonElements) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
