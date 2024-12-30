// Chocolate Distribution Problem
// Given an array arr[] of n integers where arr[i] represents the number of chocolates in ith packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that: 1. Each student gets exactly one packet The difference between the maximum and minimum number of chocolates in the packets given to the students is minimized.

// EXAMPLE
// Input: arr[] = {7, 3, 2, 4, 9, 12, 56}, m = 3 
//  Output: 2
//  Input: arr[] = {7, 3, 2, 4, 9, 12, 56}, m = 5 
// Output: 7 
// ANSWER HERE
#include <iostream>
#include <algorithm>
using namespace std;

int findMinDifference(int arr[], int n, int m) {
    if (m > n) {
        return -1;  // Not enough packets for students
    }

    sort(arr, arr + n);

    int minDiff = INT_MAX;

    for (int i = 0; i <= n - m; i++) {
        int currentDiff = arr[i + m - 1] - arr[i];
        minDiff = min(minDiff, currentDiff);
    }

    return minDiff;
}

int main() {
    int arr1[] = {7, 3, 2, 4, 9, 12, 56};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int m1 = 3;
    cout << "Example 1: " << findMinDifference(arr1, n1, m1) << endl;

    int arr2[] = {7, 3, 2, 4, 9, 12, 56};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int m2 = 5;
    cout << "Example 2: " << findMinDifference(arr2, n2, m2) << endl;

    return 0;
}
