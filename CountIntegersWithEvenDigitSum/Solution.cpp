class Solution {
public:
    int countEven(int num) {
        int i = 2, countEvenNums=0;
        while(i<=num){
            int instVal = i, sum = 0;
            while(instVal > 0){
                sum += (instVal % 10);
                instVal = instVal / 10;
            }
            if(sum % 2 == 0) countEvenNums++;
            i++;
        }
        return countEvenNums;
    }
};