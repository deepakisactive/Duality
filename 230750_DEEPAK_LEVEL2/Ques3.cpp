#include <iostream>
using namespace std;

bool isAlphanumeric(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9');
}

char toLower(char ch) {
    if (ch >= 'A' && ch <= 'Z') return ch + ('a' - 'A');  
    return ch;
}

bool isPalindrome(char s[]) {
    int left = 0, right = 0;
    
    // Find string length
    while (s[right] != '\0') right++;
    right--;  // Set right pointer to last character

    while (left < right) {
        // Ignore non-alphanumeric characters
        while (left < right && !isAlphanumeric(toLower(s[left]))) left++;
        while (left < right && !isAlphanumeric(toLower(s[right]))) right--;
        
        // Compare characters after converting to lowercase
        if (toLower(s[left]) != toLower(s[right])) return false;
        
        left++;
        right--;
    }
    return true;
}

int main() {
    char s[100];  // Assuming max length is 100
    cin.getline(s, 100);  // Read input including spaces

    cout << (isPalindrome(s) ? "true" : "false");
    return 0;
}
