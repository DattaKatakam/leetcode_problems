class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0, stringLen = word.length();
        for(auto a: word){
            if(static_cast<int>(a)>= 65 && static_cast<int>(a)< 97) count++;
        }
        if(count == 0) return true;
        else if(count == 1 && static_cast<int>(word[0])>= 65 && static_cast<int>(word[0])< 97){
            return true;
        } 
        else if(count == stringLen) return true;
        else return false;
    }
};