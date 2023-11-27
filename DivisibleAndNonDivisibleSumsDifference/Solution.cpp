class Solution {
public:
    int differenceOfSums(int n, int m) {
        int i = 1, num2 = 0, num1 = 0;
        while(i <= n){
            if(i % m == 0) num2 += i;
            else num1 += i;
            i++;
        }
        return (num1 - num2);
    }
};