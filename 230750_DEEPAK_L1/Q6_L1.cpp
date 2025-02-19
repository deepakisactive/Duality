// Palindromic Pattern
// Create a program to print a palindromic pattern using alphabets. Each row should be perfectly centered and form a palindrome using consecutive letters.
// EXAMPLE
//     A    
//    ABA   
//   ABCBA  
//  ABCDCBA 
// ANSWER HERE

#include <stdio.h>

void printPalindromicPattern(int n) {
    // Loop for each row
    for (int i = 1; i <= n; i++) {
        // Print spaces to center the pattern
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print the first part of the palindrome (increasing sequence of letters)
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c", ch);
        }

        // Print the second part of the palindrome (decreasing sequence of letters)
        for (char ch = 'A' + i - 2; ch >= 'A'; ch--) {
            printf("%c", ch);
        }

        // Move to the next line after each row
        printf("\n");
    }
}

int main() {
    int n;

    // Asking the user for input
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Print the palindromic pattern
    printPalindromicPattern(n);

    return 0;
}
