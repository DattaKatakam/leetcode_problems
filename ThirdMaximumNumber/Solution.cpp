class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int max = -2147483648, max2 = -2147483648, max3 = -2147483648, maxIndex = -1, maxIndex2 = -1, maxIndex3 = -1;
        for(int i = 0; i< nums.size(); i++){
            if(nums.at(i) >= max) {
                max = nums.at(i);
                maxIndex = i;
            }
        }
        for(int i = 0; i< nums.size(); i++){
            if(nums.at(i) >= max2 && nums.at(i) < max) {
                max2 = nums.at(i);
                maxIndex2 = i;
            }
        }
        for(int i = 0; i< nums.size(); i++){
            if(nums.at(i) >= max3 && nums.at(i) < max2 && nums.at(i) < max) {
                max3 = nums.at(i);
                maxIndex3 = i;
            }
        }
        // if(nums.size()<=3) {
        //     if(max3 == -2147483648 && maxIndex3 < 0) max3 = max;
        // }
        if(max3 == -2147483648 && maxIndex3 == -1) max3 = max;
        return max3;
    }
};