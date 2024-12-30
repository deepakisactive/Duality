// Contains duplicate
// QUESTION
// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// EXAMPLE
// Input: nums = [1,2,3,1] 
//  Output: true 
//  Input: nums = [1,2,3,4] 
// Output: false
//  Input: nums = [1,1,1,3,3,4,3,2,4,2] 
//  Output: true
// ANSWER HERE

#include <iostream>
using namespace std;

bool containsDuplicate(int nums[], int size) {
    const int RANGE = 1001; // Range of possible values
    int frequency[RANGE] = {0};

    for (int i = 0; i < size; i++) {
        if (frequency[nums[i]] > 0) {
            return true;
        }
        frequency[nums[i]]++;
    }

    return false;
}

int main() {
    int nums1[] = {1, 2, 3, 1};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    cout << "Example 1: " << (containsDuplicate(nums1, size1) ? "true" : "false") << endl;

    int nums2[] = {1, 2, 3, 4};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    cout << "Example 2: " << (containsDuplicate(nums2, size2) ? "true" : "false") << endl;

    int nums3[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    cout << "Example 3: " << (containsDuplicate(nums3, size3) ? "true" : "false") << endl;

    return 0;
}
