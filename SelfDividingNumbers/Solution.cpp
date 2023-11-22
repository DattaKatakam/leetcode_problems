class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int val = left;
        vector<int> returnInt;
        while(val <= right){
            int inst = val;
            vector<bool> isDividing;
            while(inst > 0){
                int x = inst % 10;
                if(x!= 0){
                    if(val % x == 0) isDividing.push_back(true);
                    else isDividing.push_back(false); 
                } 
                else isDividing.push_back(false); 
                inst = inst/10;
            }
            bool finalBool = false;
            for(int i = 0; i<isDividing.size() ; i++){
                if(isDividing.at(i)){
                    finalBool = true;
                //    returnInt.push_back(val);
                }
                else{
                    finalBool = false;
                    break;
                }  
            }
            if(finalBool){
                returnInt.push_back(val);
            }
            val++;
        }
        return returnInt;
    }
};