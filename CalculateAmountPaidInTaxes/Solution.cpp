class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double tax = 0.0;
        int val = income, count=-1;
        while(val > 0){
            count++;
            if(count-1>=0){
                int income_Diff = brackets.at(count).at(0) - brackets.at(count-1).at(0);
                if(val > income_Diff){
                    tax += (1.0 * income_Diff * brackets.at(count).at(1) / 100);
                    val -= income_Diff;
                }
                else{
                    tax += (1.0 * val * brackets.at(count).at(1) / 100);
                    val -= val;
                } 
            }
            else{
                if(val > brackets.at(count).at(0)){
                    tax += (1.0 * brackets.at(count).at(0) * brackets.at(count).at(1) / 100);
                    val -= brackets.at(count).at(0);
                }
                else{
                    tax += (1.0 * val * brackets.at(count).at(1) / 100);
                    val -= val;
                } 
            }
            
        }
        return tax;
    }
};