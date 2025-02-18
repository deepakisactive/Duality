#include <iostream>
using namespace std;

int minLength(char strs[][100], int n) {
    int minLen = 100;  
    for (int i = 0; i < n; i++) {
        int len = 0;
        while (strs[i][len] != '\0') len++;  // Find string length
        if (len < minLen) minLen = len;
    }
    return minLen;
}

void longestCommonPrefix(char strs[][100], int n) {
    int minLen = minLength(strs, n);  
    char prefix[100];  
    int i;
    
    for (i = 0; i < minLen; i++) {
        char ch = strs[0][i];  
        for (int j = 1; j < n; j++) {
            if (strs[j][i] != ch) {
                prefix[i] = '\0';
                cout << prefix;  
                return;
            }
        }
        prefix[i] = ch;
    }
    prefix[i] = '\0';  
    cout << prefix;
}

int main() {
    int n;
    cin >> n;  
    char strs[n][100];  
    for (int i = 0; i < n; i++) cin >> strs[i];

    longestCommonPrefix(strs, n);
    return 0;
}
