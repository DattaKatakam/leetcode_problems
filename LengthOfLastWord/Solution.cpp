class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length()-1;
        int count = 0;
        while(i>=0){
            if(s[i]==' ' && count !=0) break;
            if(s[i]!=' ') count +=1;
            i--;
        }
        return count;
    }
};