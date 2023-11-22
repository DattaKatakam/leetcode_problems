class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int min = prices.at(0);
        int minIndex = 0;
        int maxVal = prices.at(minIndex);
        int maxIndex = minIndex;
        for (int i = 0; i < prices.size(); i++) {
            if (prices.at(i) <= min) {
                minIndex = i;
                min = prices.at(i);
            } else {
                maxVal = prices.at(i);
                maxIndex = i;
                profit = max(profit, maxVal - min);
            }
        // for(int i = 0; i< prices.size()-1; i++){
        //     if(prices.at(i)<=min ){
        //         if(min == prices.at(i)) minIndex = minIndex;
        //         else minIndex = i;
        //         min = prices.at(i);
        //     }
        //     else continue;
        //     maxVal = prices.at(minIndex);
        //     maxIndex = minIndex;
        //     profit = maxVal - min;
        //     for(int j = minIndex + 1; j< prices.size(); j++){
        //         if(maxVal <= prices.at(j) && prices.at(j)>0){
        //             maxVal = prices.at(j);
        //             maxIndex = j;
        //             if(profit < maxVal - min) {
        //                 profit = maxVal - min;
        //             }
        //         }
        //     }
        //     // profit = maxVal - min;
        // }
        }
        return profit;
    }
};














 