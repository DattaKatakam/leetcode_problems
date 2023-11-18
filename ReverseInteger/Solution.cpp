class Solution {
public:
    int reverse(int x) {
        long reversedInt = 0;
        std::vector<int> reverseInt;
        int count = -1;
        if(x >= -2147483648 && x <= 2147483647){
            while(x != 0){
                count++;
                reverseInt.push_back(x%10);
                x = x/10;
            }
            int sizeVector = reverseInt.size() - 1;
            while(sizeVector >= 0){
                reversedInt += (reverseInt.back() * std::pow(10, (count - sizeVector)));
                reverseInt.pop_back();
                sizeVector--;
            }   
        }
        if(reversedInt >= -2147483648 && reversedInt <= 2147483647){
            return static_cast<int>(reversedInt);
        }
        else return 0;
    }
};