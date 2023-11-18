class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int endIndex = nums.size();
        int startIndex = 0;
        int midIndex = (startIndex + endIndex)/2;
        int count = 0;
        while(count < nums.size()){
            if(target == nums.at(midIndex)){
                break;
            }
            else if(target < nums.at(midIndex)){
                if(midIndex-1 >= 0){
                    if(target > nums.at(midIndex-1)) return midIndex;
                }
                else if(midIndex-1 == 0) return midIndex-1;
                endIndex = midIndex;
            }
            else{
                if(midIndex+1 <nums.size()){
                    if(target < nums.at(midIndex+1)) return midIndex+1;
                }
                else if(midIndex+1 > nums.size()-1) return midIndex+1;
                startIndex = midIndex;
            }
            if(endIndex == startIndex) return startIndex;
            midIndex = (startIndex + endIndex)/2;
            count++;
        }
        return midIndex;
    }
};