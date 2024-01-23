class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> finalResult;
        vector<int> currentCombination;
        generatePermute(nums, 0, currentCombination, finalResult);
        return finalResult;   
    }
    void generatePermute(const vector<int>& nums, int index, vector<int>& currentCombination, vector<vector<int>>& finalResult) {
        if (index == nums.size()) {
            finalResult.push_back(currentCombination);
            return;
        }
        for(auto const val : nums){
            std::vector<int>::iterator it;
            it = find (currentCombination.begin(), currentCombination.end(), val);
            if(it == currentCombination.end()){
                currentCombination.push_back(val);
                generatePermute(nums, index + 1, currentCombination, finalResult);
                currentCombination.pop_back();
            }
        }
    }
};