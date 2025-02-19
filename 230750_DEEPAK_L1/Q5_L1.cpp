// Reverse Number Sequence
// QUESTION
// Write a program to print natural numbers in reverse order from N to 1, where N is input by the user. Include proper error handling for negative numbers.

// EXAMPLE
// Input: N = 5
// Output:
// 5
// 4
// 3
// 2
// 1
// ANSWER HERE
#include <stdio.h>

// Function to print numbers in reverse order
void printReverse(int N) {
    if (N <= 0) {
        printf("Error: Please enter a positive integer.\n");
        return;
    }

    for (int i = N; i >= 1; i--) {
        printf("%d\n", i);
    }
}

int main() {
    int N;

    // Asking the user for input
    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    // Calling the function to print numbers in reverse
    printReverse(N);

    return 0;
}
