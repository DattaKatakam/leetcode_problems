class Solution {
public:
    int getLucky(string s, int k) {
        int stringLucky = 0, i = 1;
        string sk = s, st="";
        for(auto a: sk){
            st += std::to_string(static_cast<int>(a) - 96);
        }
        for(auto a: st){
            stringLucky += (static_cast<int>(a) - 48);
        }
        sk = std::to_string(stringLucky);
        while(i<k){
            stringLucky = 0;
            for(auto a: sk){
                stringLucky += (static_cast<int>(a) - 48);
            }
            sk = std::to_string(stringLucky);
            i++;
        }
        return stringLucky;
    }
};