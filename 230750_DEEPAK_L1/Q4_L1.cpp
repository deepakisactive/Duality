// Value vs Reference Implementation
// Implement a program demonstrating the difference between Call By Value and Call By Reference methods using swap function examples in C.

// EXAMPLE
// Before Swap:
// x = 10, y = 20
// After Call By Value:
// x = 10, y = 20 (values unchanged)
// After Call By Reference:
// x = 20, y = 10 (values swapped)

#include <stdio.h>

// Function for Call By Value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function for Call By Reference
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Before Swap:\n");
    printf("x = %d, y = %d\n", x, y);

    // Call By Value
    swapByValue(x, y);
    printf("\nAfter Call By Value:\n");
    printf("x = %d, y = %d (values unchanged)\n", x, y);

    // Call By Reference
    swapByReference(&x, &y);
    printf("\nAfter Call By Reference:\n");
    printf("x = %d, y = %d (values swapped)\n", x, y);

    return 0;
}
