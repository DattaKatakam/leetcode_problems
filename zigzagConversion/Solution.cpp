class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }
        int lenCols = min(numRows, int(s.length())), cRow = 0;
        string returnResult;
        vector<string> rows(lenCols);
        bool gDown = false;

        for (char c : s) {
            rows[cRow] += c;
            if (cRow == 0 || cRow == numRows - 1) {
                gDown = !gDown;
            }
            cRow += gDown ? 1 : -1;
        }

        for (const string& r : rows) {
            returnResult += r;
        }

        return returnResult;
    }
};