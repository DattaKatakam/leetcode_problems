class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxCount = 0, i = 0;
        vector<char> inst;
        while(i < s.size()){
            std::vector<char>::iterator it;
            it = find (inst.begin(), inst.end(), s[i]);
            if (it == inst.end()){
                inst.push_back(s[i]);  
                if(maxCount < inst.size()) maxCount = inst.size();
                i++;
            }
            else{
                inst.erase(inst.begin());
            }
        }
        return maxCount;
    }
};