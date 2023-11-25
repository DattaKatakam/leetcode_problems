class Solution {
public:
    int countOdds(int low, int high) {
        int i = low, oddCount = 0;
        while(i <= high){
            if(i%2 != 0) oddCount++;
            i++;
        }
        return oddCount;
    }
};