class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = 0, right = matrix.size(), insideSize = matrix.at(0).size(), mid;
        while(left < right){
            mid = left + (right - left) / 2;
            if(matrix.at(mid).at(0) > target) right = mid;
            else if(matrix.at(mid).at(insideSize-1) < target) left = mid+1;
            else{
                int iLeft = 0, iRight = insideSize, mMid;
                while(iLeft < iRight){
                    mMid = iLeft + (iRight - iLeft) / 2;
                    if(matrix.at(mid).at(mMid) == target) return true;
                    else if(matrix.at(mid).at(mMid) > target) iRight = mMid;
                    else iLeft = mMid+1;     
                }
                return false;
            }
        }
        return false;
    }
};