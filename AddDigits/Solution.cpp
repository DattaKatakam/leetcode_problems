class Solution {
public:
    int addDigits(int num) {
        int inum = num, sum =0;
        while(inum > 0){
            sum += (inum % 10);
            inum /= 10;
            if(inum == 0 && sum <= 9) return sum;
            else if(inum == 0) {
                inum = sum;
                sum = 0;
            }
        }
        return sum;
    }
};