// Product of Array except self
// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.You must write an algorithm that runs in O(n) time and without using the division operation.

// EXAMPLE
// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]
// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]

#include <iostream>
using namespace std;

void productExceptSelf(int nums[], int n, int result[]) {
    int leftProduct = 1;
    // Calculate left products and store in result[] array
    for (int i = 0; i < n; i++) {
        result[i] = leftProduct;
        leftProduct *= nums[i];
    }

    int rightProduct = 1;
    // Update result[] array with right products
    for (int i = n - 1; i >= 0; i--) {
        result[i] *= rightProduct;
        rightProduct *= nums[i];
    }
}

int main() {
    int nums1[] = {1, 2, 3, 4};
    int nums2[] = {-1, 1, 0, -3, 3};
    
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int n2 = sizeof(nums2) / sizeof(nums2[0]);

    int result1[n1], result2[n2];
    
    productExceptSelf(nums1, n1, result1);
    productExceptSelf(nums2, n2, result2);
    
    // Output result1
    cout << "Output 1: ";
    for (int i = 0; i < n1; i++) {
        cout << result1[i] << " ";
    }
    cout << endl;

    // Output result2
    cout << "Output 2: ";
    for (int i = 0; i < n2; i++) {
        cout << result2[i] << " ";
    }
    cout << endl;
    
    return 0;
}
