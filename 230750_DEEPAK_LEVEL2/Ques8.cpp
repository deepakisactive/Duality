#include <iostream>
using namespace std;

#define PRIME 101  // A prime number for hashing

int computeHash(char str[], int len) {
    int hash = 0, power = 1;
    for (int i = 0; i < len; i++) {
        hash += str[i] * power;
        power *= PRIME;
    }
    return hash;
}

void rabinKarp(char text[], char pattern[], int textLen, int patternLen) {
    int patternHash = computeHash(pattern, patternLen);
    int textHash = computeHash(text, patternLen);
    int power = 1;  // Compute PRIME^(patternLen-1)
    
    for (int i = 0; i < patternLen - 1; i++) power *= PRIME;

    for (int i = 0; i <= textLen - patternLen; i++) {
        if (textHash == patternHash) {  
            bool match = true;
            for (int j = 0; j < patternLen; j++) {
                if (text[i + j] != pattern[j]) {
                    match = false;
                    break;
                }
            }
            if (match) cout << (i + 1) << " ";
        }

        // Compute rolling hash
        if (i < textLen - patternLen) {
            textHash = (textHash - text[i]) / PRIME + text[i + patternLen] * power;
        }
    }
}

int main() {
    char text[] = "geeksforgeeks";
    char pattern[] = "geek";

    int textLen = 13;    // Length of "geeksforgeeks"
    int patternLen = 4;  // Length of "geek"

    rabinKarp(text, pattern, textLen, patternLen);
    
    return 0;
}
