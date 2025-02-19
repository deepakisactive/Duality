#include <iostream>
using namespace std;

int findFirstOccurrence(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) return i;  // Return index when x is found
    }
    return -1;  // Return -1 if x is not found
}

int main() {
    int n, x;
    cin >> n;  // Input array size
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];  // Input array elements
    cin >> x;  // Input target element

    cout << findFirstOccurrence(arr, n, x);
    return 0;
}
