// 3 Sum Problem
// QUESTION
// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.Notice that the solution set must not contain duplicate triplets.

// EXAMPLE
// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Input: nums = [0,1,1]
// Output: []

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    int n = nums.size();
    
    // Step 1: Sort the array
    sort(nums.begin(), nums.end());
    
    // Step 2: Iterate through the array
    for (int i = 0; i < n - 2; i++) {
        // Skip duplicate elements for the first position
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        // Step 3: Use two-pointer technique for the remaining two elements
        int left = i + 1, right = n - 1;
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            
            if (sum == 0) {
                // Found a valid triplet
                result.push_back({nums[i], nums[left], nums[right]});
                
                // Skip duplicates for left pointer
                while (left < right && nums[left] == nums[left + 1]) {
                    left++;
                }
                // Skip duplicates for right pointer
                while (left < right && nums[right] == nums[right - 1]) {
                    right--;
                }
                
                // Move both pointers inward
                left++;
                right--;
            }
            else if (sum < 0) {
                left++;  // Need a larger sum, so move left pointer to the right
            }
            else {
                right--;  // Need a smaller sum, so move right pointer to the left
            }
        }
    }
    
    return result;
}

int main() {
    vector<int> nums1 = {-1, 0, 1, 2, -1, -4};
    vector<int> nums2 = {0, 1, 1};
    
    vector<vector<int>> result1 = threeSum(nums1);
    vector<vector<int>> result2 = threeSum(nums2);
    
    // Print result1
    cout << "Result 1: ";
    for (auto& triplet : result1) {
        cout << "[";
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << "] ";
    }
    cout << endl;
    
    // Print result2
    cout << "Result 2: ";
    for (auto& triplet : result2) {
        cout << "[";
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << "] ";
    }
    cout << endl;
    
    return 0;
}
