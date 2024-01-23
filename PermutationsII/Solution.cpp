class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> currentCombination;
        set<vector<int>> subAns;       
        vector<vector<int>> ans;
        vector<bool> visited(nums.size(), false);
        generatePermute(visited, nums, subAns, currentCombination);
        for(const auto inst: subAns){
            ans.push_back(inst);
        }
        return ans; 
    }
    void generatePermute(vector<bool> &visited, vector<int> &nums, set<vector<int>> &subAns, vector<int> &currentCombination){
        if(currentCombination.size() == nums.size()){
            subAns.insert(currentCombination);
            return;
        }
        for(int i = nums.size()-1; i >= 0 ;i--){
            if(visited[i] == true) continue;
            else{
                visited[i] = true;
                currentCombination.push_back(nums[i]);
                generatePermute(visited, nums, subAns, currentCombination);
                visited[i] = false;
                currentCombination.pop_back();
            }
        }
    }
};