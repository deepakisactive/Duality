#include <iostream>
using namespace std;

int lengthOfLongestSubstring(char s[]) {
    int lastIndex[256]; // Array to store last seen index of characters
    for (int i = 0; i < 256; i++) lastIndex[i] = -1;

    int maxLen = 0, start = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (lastIndex[s[i]] >= start) {
            start = lastIndex[s[i]] + 1; // Move start after last occurrence
        }
        lastIndex[s[i]] = i;  // Update last seen index
        maxLen = (i - start + 1 > maxLen) ? (i - start + 1) : maxLen;
    }
    
    return maxLen;
}

int main() {
    char s[100];  // Assuming max input length is 100
    cin >> s;  

    cout << lengthOfLongestSubstring(s);
    return 0;
}
