#include <iostream>
using namespace std;

int myAtoi(char s[]) {
    int i = 0, sign = 1;
    long result = 0;  // Use long to handle overflow before clamping

    // Ignore leading whitespaces
    while (s[i] == ' ') i++;

    // Handle sign
    if (s[i] == '-' || s[i] == '+') {
        if (s[i] == '-') sign = -1;
        i++;
    }

    // Convert characters to integer
    while (s[i] >= '0' && s[i] <= '9') {
        result = result * 10 + (s[i] - '0');

        // Clamp to 32-bit integer range
        if (result * sign > 2147483647) return 2147483647;  // INT_MAX
        if (result * sign < -2147483648) return -2147483648;  // INT_MIN

        i++;
    }

    return result * sign;
}

int main() {
    char s[100];  // Assuming max input length is 100
    cin.getline(s, 100);  // Read input with spaces

    cout << myAtoi(s);
    return 0;
}
