#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) return -1;  // Base condition: Target not found
    
    int mid = left + (right - left) / 2;  // Avoids overflow
    
    if (arr[mid] == target) return mid;  // Target found
    if (arr[mid] > target) return binarySearch(arr, left, mid - 1, target);  // Search in left half
    return binarySearch(arr, mid + 1, right, target);  // Search in right half
}

int main() {
    int n, target;
    cin >> n;  // Size of array
    int arr[n];
    
    for (int i = 0; i < n; i++) cin >> arr[i];  // Input sorted array
    cin >> target;  // Input target element

    int result = binarySearch(arr, 0, n - 1, target);
    cout << result;
    return 0;
}
