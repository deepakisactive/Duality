#include <iostream>
using namespace std;

void findFactorialNumbers(int n, int fact = 1, int i = 1) {
    if (fact > n) return;  // Base condition: Stop if factorial exceeds N
    cout << fact << " ";    // Print the current factorial
    findFactorialNumbers(n, fact * (i + 1), i + 1);  // Recursive call for next factorial
}

int main() {
    int n;
    cin >> n;
    findFactorialNumbers(n);
    return 0;
}
