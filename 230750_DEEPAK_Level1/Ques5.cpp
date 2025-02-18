#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;  // Optimization: Track if any swaps occur
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap adjacent elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;  // If no swaps occurred, the array is already sorted
    }
}

int main() {
    int n;
    cin >> n;  // Input array size
    int arr[n];
    
    for (int i = 0; i < n; i++) cin >> arr[i];  // Input array elements
    
    bubbleSort(arr, n);
    
    for (int i = 0; i < n; i++) cout << arr[i] << " ";  // Print sorted array
    return 0;
}
