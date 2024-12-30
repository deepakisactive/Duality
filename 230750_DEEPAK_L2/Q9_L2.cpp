// Maximum Product Subarray
// QUESTION
// Given an integer array nums, find a subarraythat has the largest product, and return the product.The test cases are generated so that the answer will fit in a 32-bit integer.

// EXAMPLE
// Input: nums = [2,3,-2,4]
// Output: 6
// Input: nums = [-2,0,-1]
// Output: 0

#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

int maxProduct(int nums[], int n) {
    if (n == 0) return 0;

    int maxProductSoFar = nums[0];
    int minProductSoFar = nums[0];
    int result = nums[0];

    for (int i = 1; i < n; i++) {
        // If current number is negative, swap max and min
        if (nums[i] < 0) {
            swap(maxProductSoFar, minProductSoFar);
        }

        // Calculate the maximum and minimum product ending at index i
        maxProductSoFar = max(nums[i], maxProductSoFar * nums[i]);
        minProductSoFar = min(nums[i], minProductSoFar * nums[i]);

        // Update the result to be the maximum product found so far
        result = max(result, maxProductSoFar);
    }

    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int nums[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Maximum Product Subarray: " << maxProduct(nums, n) << endl;
    
    return 0;
}
