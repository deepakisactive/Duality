// Digit Frequency Counter
// QUESTION
// Create a program that counts the frequency of a given digit in a number. The program should work for multi-digit numbers and handle edge cases.

// EXAMPLE
// Input: 
// Number: 11345522
// Digit: 2
// Output:
// Frequency: 2
// Explanation: The digit 2 appears twice in 11345522

#include <iostream>
#include <cmath>
using namespace std;

// Function to count the frequency of a digit in a number
int countDigitFrequency(long long number, int digit) {
    if (digit < 0 || digit > 9) {
        cout << "Invalid digit! Please enter a digit between 0 and 9." << endl;
        return -1;
    }

    int frequency = 0;
    number = abs(number); // Handle negative numbers

    if (number == 0 && digit == 0) {
        return 1; // Special case for number 0 and digit 0
    }

    while (number > 0) {
        if (number % 10 == digit) {
            frequency++;
        }
        number /= 10;
    }

    return frequency;
}

int main() {
    long long number;
    int digit;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Enter the digit to count: ";
    cin >> digit;

    int frequency = countDigitFrequency(number, digit);

    if (frequency != -1) {
        cout << "Frequency: " << frequency << endl;
    }

    return 0;
}
