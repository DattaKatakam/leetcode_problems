class Solution {
public:
    int arrangeCoins(int n) {
        int val = n, count = 0;
        while(val > 0){
            count++;
            if(val - count < 0) return count-1;
            val -= count;
        }
        return count;
    }
};