class Solution {
public:
    bool isHappy(int n) {
        bool isHappy = false;
        if(n>=1 && n<=2147483647){
            long val = n;
            long sum = 0;
            while(val>0){
                sum += std::pow((val%10), 2);
                val = val/10;
            }
            val = sum;
            sum = 0;
            while(!isHappy){
                while(val>0){
                    sum += std::pow((val%10), 2);
                    val = val/10;
                }
                val = sum;
                if(sum >= 1 && sum < 10){
                    if(sum == 1) isHappy = true;
                    else break;
                }
                sum = 0;
            }
        }
        return isHappy;
    }
};