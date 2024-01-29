class Solution {
public:
    bool isPalindrome(string s) {
        string newS="";
        for (char c : s) {
            if (isAlphabet(c)) {
                newS += std::tolower(c);
            }
        }
        int lenS = newS.size();
        int i = 0, j = lenS - 1;
        while(i<=j){
            if(newS[i] != newS[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    bool isAlphabet(char c) {
        return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >='0' && c <= '9');
    }
};