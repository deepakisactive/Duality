// Trapping Rain Water
// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
#include <iostream>

using namespace std;

int trap(int height[], int n) {
  int leftMax[n], rightMax[n];
  int water = 0;

  // Calculate left maximum for each bar
  leftMax[0] = height[0];
  for (int i = 1; i < n; i++) {
    leftMax[i] = max(leftMax[i - 1], height[i]);
  }

  // Calculate right maximum for each bar
  rightMax[n - 1] = height[n - 1];
  for (int i = n - 2; i >= 0; i--) {
    rightMax[i] = max(rightMax[i + 1], height[i]);
  }

  // Calculate water trapped at each bar
  for (int i = 0; i < n; i++) {
    water += min(leftMax[i], rightMax[i]) - height[i];
  }

  return water;
}

int main() {
  int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
  int n = sizeof(height) / sizeof(height[0]);
  cout << "Total water trapped: " << trap(height, n) << endl;
  return 0;
}