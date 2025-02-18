#include <iostream>
using namespace std;

#define CHAR 256  

string minWindow(char s[], char t[]) {
    int lenS = 0, lenT = 0;
    while (s[lenS] != '\0') lenS++;  // Get length of s
    while (t[lenT] != '\0') lenT++;  // Get length of t

    if (lenT > lenS) return "";  

    int freqT[CHAR] = {0}, freqS[CHAR] = {0};  
    for (int i = 0; i < lenT; i++) freqT[t[i]]++;  

    int start = 0, minLen = lenS + 1, count = 0, startIdx = -1;
    
    for (int end = 0; end < lenS; end++) {
        freqS[s[end]]++;  
        if (freqT[s[end]] != 0 && freqS[s[end]] <= freqT[s[end]]) count++;

        while (count == lenT) {
            if (end - start + 1 < minLen) {
                minLen = end - start + 1;
                startIdx = start;
            }

            freqS[s[start]]--;  
            if (freqT[s[start]] != 0 && freqS[s[start]] < freqT[s[start]]) count--;
            start++;
        }
    }
    
    if (startIdx == -1) return "";  

    string res = "";
    for (int i = startIdx; i < startIdx + minLen; i++) res += s[i];  
    return res;
}

int main() {
    char s[] = "ADOBECODEBANC";
    char t[] = "ABC";
    
    string result = minWindow(s, t);
    cout << result;

    return 0;
}
