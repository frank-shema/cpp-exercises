#include <iostream>
#include <vector>

using namespace std;

// Function to partition the array and return the index of the pivot
int partition(vector<int>& arr, int low, int high) {
    // Choose the pivot (for simplicity, using the last element)
    int pivot = arr[high];
    
    // Initialize the index of the smaller element
    int smallerIndex = low - 1;

    // Iterate through the array
    for (int i = low; i < high; ++i) {
        if (arr[i] <= pivot) {
            // Swap arr[i] and arr[smallerIndex + 1]
            swap(arr[i], arr[++smallerIndex]);
        }
    }

    // Swap arr[high] (pivot) with arr[smallerIndex + 1]
    swap(arr[high], arr[++smallerIndex]);

    // Return the index of the pivot element
    return smallerIndex;
}

// Function to perform QuickSort
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // Partition the array and get the index of the pivot
        int pivotIndex = partition(arr, low, high);

        // Recursively sort the sub-arrays on both sides of the pivot
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    // Example usage
    vector<int> myArray = {7, 2, 1, 6, 8, 5, 3, 4};
    
    // Perform QuickSort
    quickSort(myArray, 0, myArray.size() - 1);

    // Print the sorted array
    cout << "Sorted Array: ";
    for (int num : myArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
