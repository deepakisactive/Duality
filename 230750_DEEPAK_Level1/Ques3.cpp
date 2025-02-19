#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;  // Base cases: F(0) = 0, F(1) = 1
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive relation
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}
