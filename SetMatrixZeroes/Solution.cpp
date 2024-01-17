#include <unordered_set>

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        std::unordered_set<int> rows;
        std::unordered_set<int> cols;
        for(int i =0; i< matrix.size(); i++){
            for(int j = 0; j < matrix.at(i).size(); j++){
                if(matrix.at(i).at(j) == 0){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        for (int i : rows) {
            for (int j = 0; j < matrix[i].size(); ++j) {
                matrix[i][j] = 0;
            }
        }

        for (int j : cols) {
            for (int i = 0; i < matrix.size(); ++i) {
                matrix[i][j] = 0;
            }
        }
    }
};