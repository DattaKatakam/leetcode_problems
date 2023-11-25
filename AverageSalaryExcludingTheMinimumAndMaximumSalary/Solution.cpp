class Solution {
public:
    double average(vector<int>& salary) {
        double newAvg = 0.0, len = salary.size()-2;
        int minVal = INT_MAX, maxVal = INT_MIN;
        for(auto a: salary){
            if(minVal >= a) minVal = a;
            if(maxVal < a) maxVal = a;
            newAvg += a;
        }
        newAvg = (newAvg - maxVal - minVal) / len;
        return newAvg;
    }
};