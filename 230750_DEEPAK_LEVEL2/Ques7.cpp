#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void nextPermutation(int arr[], int n) {
    int i = n - 2;

    // Step 1: Find the rightmost element which is smaller than its next
    while (i >= 0 && arr[i] >= arr[i + 1]) i--;

    if (i >= 0) { 
        // Step 2: Find the smallest element on right side which is larger than arr[i]
        int j = n - 1;
        while (arr[j] <= arr[i]) j--;

        // Step 3: Swap them
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Step 4: Reverse the elements to the right of i
    reverse(arr, i + 1, n - 1);
}

int main() {
    int arr[] = {2, 4, 1, 7, 5, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    nextPermutation(arr, n);

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    
    return 0;
}
