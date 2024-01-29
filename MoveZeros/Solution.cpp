class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0;
        while(i <= j && j < nums.size()-1){
            if(nums.at(i) == 0){
                j++;
                while(nums.at(j) == 0 && j < nums.size()-1){
                    j++;
                }
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
            i++;
            j = i;
        }
    }
};