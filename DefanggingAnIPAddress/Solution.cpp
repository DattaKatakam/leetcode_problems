class Solution {
public:
    string defangIPaddr(string address) {
        string pair1 = "", pair2 = "", pair3 = "", pair4 = "";
        int count = 0;
        for(auto c: address){
            if(count == 0 && c != '.'){
                pair1 += c;
            }
            else if(count == 1 && c != '.'){
                pair2 += c;
            } 
            else if(count == 2 && c != '.'){
                pair3 += c;
            } 
            else if( c != '.'){
                pair4 += c;
            }
            if(c == '.'){
                count++;
            }
        }
        return (pair1 + "[.]" + pair2 + "[.]" + pair3 + "[.]" + pair4);
    }
};