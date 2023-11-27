class Solution {
public:
    int maxSum(vector<int>& nums) {
        int maxVal = -1;
        for(int i=0; i<nums.size();i++){
            for(int j = i+1; j<nums.size(); j++){
                int sumVal = nums.at(i)+nums.at(j);
                int n1 = nums.at(i), n2 = nums.at(j);
                if(getPairBool(n1, n2)){
                    if( sumVal > maxVal){
                        maxVal = sumVal;
                    }    
                }
            }
        }
        return maxVal;
    }
    bool getPairBool(int n1, int n2){
        int maxN1=0, maxN2=0;
        while(n1>0 || n2>0){
            if(n1%10 > maxN1) maxN1 = n1%10;
            n1 = n1/10;
            if(n2%10 > maxN2) maxN2 = n2%10;
            n2 = n2/10;
        }
        if(maxN1 == maxN2) return true;
        else return false;
    }
};