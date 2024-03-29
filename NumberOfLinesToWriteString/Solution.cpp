class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> lines;
        int lineWidth = 0;
        int lineCoun=1;
        for(auto ch: s){
            if(lineWidth + widths.at(ch-'a')>100){
                lineCoun++;
                lineWidth = 0;
            }
            lineWidth += widths.at(ch-'a');
        }
        lines.push_back(lineCoun);
        lines.push_back(lineWidth);
        return lines;
    }
};