#include <cctype>
class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int uCount = 0, lCount = 0, nCount = 0, sCount = 0;
        bool simBool = false, returnBool = false;
        if(password.length() < 8) return returnBool;
        else{
            for (int it = 0; it < password.length(); it++) {
                int asciiVal = static_cast<int>(password[it]);
                if (isdigit(password[it])) {
                    nCount++;
                    if(it - 1 >=0){
                        if(password[it] == password[it-1]) simBool = true;
                    }
                }
                else if (isupper(password[it])) {
                    uCount++;
                    if(it - 1>= 0){
                        if(password[it-1] == password[it]) simBool = true;
                    }
                }
                else if (islower(password[it])) {
                    lCount++;
                    if(it - 1 >=0){
                        if(password[it-1] == password[it]) simBool = true;
                    }
                }
                else if((asciiVal >= 33 && asciiVal <=45) || asciiVal == 64 || asciiVal == 94){
                    sCount++;
                    if(it - 1 >=0){
                        if(password[it] == password[it-1]) simBool = true;
                    }
                }
            }
            if(nCount>=1 && lCount>=1 && uCount>=1 && sCount>=1 && !simBool) returnBool = true;
            return returnBool;
        }
    }
};