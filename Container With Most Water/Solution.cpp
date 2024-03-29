class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1;
        int maxArea = 0;
        while(left < right){
            int instArea = (right-left) * getMin(height.at(left), height.at(right));
            maxArea = getMax(maxArea, instArea);
            if(height.at(left) < height.at(right)){
                left++;
            }
            else right--;
        }
        return maxArea;
    }
    int getMax(int val1, int val2){
        if(val1 > val2) return val1;
        return val2;
    }
    int getMin(int val1, int val2){
        if(val1 < val2) return val1;
        return val2;
    }
};