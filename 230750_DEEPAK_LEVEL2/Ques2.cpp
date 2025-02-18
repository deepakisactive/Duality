#include <iostream>
using namespace std;

bool areIsomorphic(char s[], char t[]) {
    int mapS[256] = {0}, mapT[256] = {0};  // Arrays for character mapping
    
    for (int i = 0; s[i] != '\0' && t[i] != '\0'; i++) {
        if (mapS[s[i]] == 0 && mapT[t[i]] == 0) {
            mapS[s[i]] = t[i];  // Map s[i] -> t[i]
            mapT[t[i]] = s[i];  // Map t[i] -> s[i]
        }
        else if (mapS[s[i]] != t[i] || mapT[t[i]] != s[i]) {
            return false;  // If mapping is inconsistent, return false
        }
    }
    return true;
}

int main() {
    char s[100], t[100];  // Assuming max length is 100
    cin >> s >> t;  // Input two strings

    cout << (areIsomorphic(s, t) ? "true" : "false");
    return 0;
}
