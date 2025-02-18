#include <iostream>
using namespace std;

bool isMatch(char wild[], char pattern[], int w, int p) {
    if (w < 0 && p < 0) return true;  // Both are exhausted
    if (w < 0) return false;          // Wildcard exhausted but pattern remains
    if (p < 0) {  // Check if remaining wildcard has only '*'
        for (int i = 0; i <= w; i++) if (wild[i] != '*') return false;
        return true;
    }

    if (wild[w] == pattern[p] || wild[w] == '?')  
        return isMatch(wild, pattern, w - 1, p - 1);

    if (wild[w] == '*')  
        return isMatch(wild, pattern, w - 1, p) || isMatch(wild, pattern, w, p - 1);

    return false;
}

bool match(char wild[], char pattern[]) {
    int w = 0, p = 0;
    while (wild[w] != '\0') w++;  // Get lengths
    while (pattern[p] != '\0') p++;

    return isMatch(wild, pattern, w - 1, p - 1);
}

int main() {
    char wild[] = "ge*ks";
    char pattern[] = "geeks";

    if (match(wild, pattern)) cout << "Yes";
    else cout << "No";

    return 0;
}
