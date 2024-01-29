class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0, j = s.size()-1;
        while(j>=i){
            char inst = s[i];
            s[i] = s[j];
            s[j] = inst;
            i++;
            j--;
        }
    }
};