// Kth Smallest Problem
// QUESTION
// Given an array arr[] and an integer k where k is smaller than the size of the array, the task is to find the kth smallest element in the given array.

// EXAMPLE
// Input: arr[] = [7, 10, 4, 3, 20, 15], k = 3
// Output:  7
// Input: arr[] = [2, 3, 1, 20, 15], k = 4 
// Output: 15

#include <iostream>
#include <algorithm>  // for sort function
using namespace std;

int findKthSmallest(int arr[], int n, int k) {
    // Sort the array
    sort(arr, arr + n);
    // Return the k-th smallest element (k-1 due to zero-based indexing)
    return arr[k - 1];
}

int main() {
    int arr1[] = {7, 10, 4, 3, 20, 15};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 3;
    cout << "The " << k1 << "-th smallest element is: " << findKthSmallest(arr1, n1, k1) << endl;

    int arr2[] = {2, 3, 1, 20, 15};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 4;
    cout << "The " << k2 << "-th smallest element is: " << findKthSmallest(arr2, n2, k2) << endl;

    return 0;
}
