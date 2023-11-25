class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        std::vector<int> inst, inst2;
        for(auto a: arr) {
            inst.push_back(a); 
            inst2.push_back(a);
        }
        int length = arr.size();
        for(int i = 0; i< length; i++){
            if(inst.at(i) == 0){
                int k = i + 1;
                while(k < length){
                    inst[k] = inst2.at(k-1);
                    k++;
                }
                i++;
            }
            inst2.clear();
            for(auto ch: inst) inst2.push_back(ch); 
        }
        arr.clear();
        for(auto a: inst2) arr.push_back(a);
    }
};