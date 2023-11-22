class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int count = 0;
        vector<string> returnVector;
        while(count < n){
            count++;
            if(count%3 ==0 && count%5 == 0){
                returnVector.push_back("FizzBuzz");
            }
            else if(count%3 ==0){
                returnVector.push_back("Fizz");
            }else if(count%5 == 0){
                returnVector.push_back("Buzz");
            }
            else returnVector.push_back(std::to_string(count));
        }
        return returnVector;
    }
};