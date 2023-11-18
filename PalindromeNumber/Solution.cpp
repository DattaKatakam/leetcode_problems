class Solution {
public:
    bool isPalindrome(int x) {
        std::string numString = std::to_string(x);
        int i =0;
        int j = numString.length()-1;
        while(i < numString.length()){
            if(!(numString[i] == numString[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};