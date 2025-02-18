#include <iostream>
using namespace std;

void removeOuterParentheses(char s[], int len) {
    int openCount = 0;  
    for (int i = 0; i < len; i++) {
        if (s[i] == '(') {
            if (openCount > 0) cout << s[i];  // Print only if it's not an outer '('
            openCount++;
        } 
        else {  // s[i] == ')'
            openCount--;
            if (openCount > 0) cout << s[i];  // Print only if it's not an outer ')'
        }
    }
}

int main() {
    char s[100];  // Assuming max length is 100
    cin >> s;  // Input the parentheses string

    int len = 0;
    while (s[len] != '\0') len++;  // Calculate string length

    removeOuterParentheses(s, len);
    return 0;
}
