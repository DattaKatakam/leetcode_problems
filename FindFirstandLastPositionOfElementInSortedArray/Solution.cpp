class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> returnList;
        if(nums.size() == 0) return {-1, -1};
        int left = 0;
        int right = nums.size() - 1;
        int ind = getPos(nums, target, left, right);
        if(ind == -1){
            return {-1, -1};
        }
        while (left < right) {
            int mid = left + (right - left + 1) / 2;

            if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid;
            }
        }

        return {ind, left};
    }
    int getPos(vector<int>& nums, int target, int left, int right){
        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return (nums[left] == target) ? left : -1;
    }
};