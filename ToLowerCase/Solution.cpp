class Solution {
public:
    string toLowerCase(string s) {
        string returnStr = "";
        for(auto st: s){
            if( static_cast<int>(st) >= 65 && static_cast<int>(st) <= 90){
                returnStr += static_cast<char>(static_cast<int>(st)+32);
            }
            else returnStr += st;
        }
        return returnStr;
    }
};