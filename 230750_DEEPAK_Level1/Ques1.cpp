#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n == 0) return;  // Base condition
    printNumbers(n - 1); // Recursive call
    cout << n << " ";    // Print after recursion to get increasing order
}

int main() {
    int n;
    cin >> n;
    printNumbers(n);
    return 0;
}
