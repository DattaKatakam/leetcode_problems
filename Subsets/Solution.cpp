class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> finalResult;
        vector<int> currentCombination;
        generateSubSet(nums, 0, currentCombination, finalResult);
        return finalResult;
    }
    void generateSubSet(const vector<int>& nums, int index, vector<int>& currentCombination, vector<vector<int>>& finalResult) {
        if (index == nums.size()) {
            finalResult.push_back(currentCombination);
            return;
        }
        generateSubSet(nums, index + 1, currentCombination, finalResult);
        currentCombination.push_back(nums.at(index));
        generateSubSet(nums, index + 1, currentCombination, finalResult);
        currentCombination.pop_back();

    }
};