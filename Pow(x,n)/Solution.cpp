class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1.0;

        double sum = myPow(x, n / 2);

        if (n % 2 == 0) {
            return sum * sum;
        } else {
            if(n < 0) return (1/x) * sum *sum;
            else return x * sum * sum;
        }
    }
};