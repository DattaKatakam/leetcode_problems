class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> returnSet;
        for(int i=0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                if(target == nums.at(i) + nums.at(j)){
                    returnSet.push_back(i);
                    returnSet.push_back(j);
                }
            }
        }
        return returnSet;
    }
};