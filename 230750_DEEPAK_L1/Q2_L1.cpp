// Binary Number Conversion
// Write a program to convert a decimal number to binary and vice versa. The program should handle both positive and negative numbers.

// EXAMPLE
// Input: 42 (decimal)
// Output: 101010 (binary)
// Input: 1010 (binary)
// Output: 10 (decimal)

#include <iostream>
#include <cmath>
using namespace std;

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    if (decimal == 0) {
        cout << "0" << endl;
        return;
    }
    
    bool isNegative = decimal < 0;
    if (isNegative) decimal = -decimal;

    int binary[32]; // Array to store binary digits
    int index = 0;

    while (decimal > 0) {
        binary[index++] = decimal % 2;
        decimal /= 2;
    }

    if (isNegative) cout << "-";

    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }
    cout << endl;
}

// Function to convert binary to decimal
void binaryToDecimal(string binary) {
    int decimal = 0;
    bool isNegative = binary[0] == '-';
    int startIndex = isNegative ? 1 : 0;

    for (int i = startIndex; i < binary.length(); i++) {
        decimal = decimal * 2 + (binary[i] - '0');
    }

    if (isNegative) decimal = -decimal;
    cout << decimal << endl;
}

int main() {
    int choice;
    cout << "Choose Conversion Type:\n1. Decimal to Binary\n2. Binary to Decimal\n";
    cin >> choice;

    if (choice == 1) {
        int decimal;
        cout << "Enter Decimal Number: ";
        cin >> decimal;
        cout << "Binary: ";
        decimalToBinary(decimal);
    } else if (choice == 2) {
        string binary;
        cout << "Enter Binary Number: ";
        cin >> binary;
        cout << "Decimal: ";
        binaryToDecimal(binary);
    } else {
        cout << "Invalid Choice!" << endl;
    }

    return 0;
}

