// Cyclically rotate an array by one
// Given an array, the task is to cyclically rotate the array clockwise by one time.

// EXAMPLE
// nput: arr[] = {1, 2, 3, 4, 5} 
// Output: arr[] = {5, 1, 2, 3, 4}
// Input: arr[] = {2, 3, 4, 5, 1}
// Output: {1, 2, 3, 4, 5}
// ANSWER HERE
#include <iostream>
using namespace std;

void rotateArray(int arr[], int n) {
    int last = arr[n - 1]; // Store the last element

    // Shift all elements to the right by one
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Move the last element to the first position
    arr[0] = last;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    cout << "Original Array: ";
    printArray(arr1, n1);

    rotateArray(arr1, n1);

    cout << "Array after rotation: ";
    printArray(arr1, n1);

    int arr2[] = {2, 3, 4, 5, 1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Original Array: ";
    printArray(arr2, n2);

    rotateArray(arr2, n2);

    cout << "Array after rotation: ";
    printArray(arr2, n2);

    return 0;
}
