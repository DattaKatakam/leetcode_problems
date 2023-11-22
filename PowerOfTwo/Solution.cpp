class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool isPower = false;
        int val = n;
        while(val>0){
            if(val%2 != 0){                
                if(val == 1){
                    isPower = true;
                }
                else{
                    isPower = false;   
                    break;
                }
            }
            val = val/2;
        }
        return isPower;
    }
};