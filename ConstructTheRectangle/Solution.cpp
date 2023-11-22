class Solution {
public:
    vector<int> constructRectangle(int area) {
        int LengthRect = 1, WidthRect = 1, count = 1;
        int minDiff = 2147483647;
        vector<int> returnInt;
        returnInt.push_back(LengthRect);
        returnInt.push_back(WidthRect);
        while(count <= area){
            if(area%count == 0){
                WidthRect = count;
                LengthRect = area / WidthRect;
            }
            if(minDiff > LengthRect - WidthRect && LengthRect >= WidthRect){
                minDiff = LengthRect - WidthRect;
                returnInt.clear();
                returnInt.push_back(LengthRect);
                returnInt.push_back(WidthRect);
            }
            count++;
        }
        return returnInt;
    }
};