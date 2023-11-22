class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0, count = 1;
        while(count < num){
            if(num%count ==0){
                sum += count;
            }
            count++;
        }
        if(sum == num) return true;
        else return false;
    }
};