class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> linMat;
        vector<vector<int>> reshapMat;
        for(int i =0; i< mat.size(); i++){
            for(int j = 0; j < mat.at(i).size(); j++){
                linMat.push_back(mat.at(i).at(j));
            }
        }
        if(mat.size() * mat.at(0).size() != r * c){
            return mat;
        }
        int index = 0;
        for (int i = 0; i < r; i++) {
            std::vector<int> instMat;
            for (int j = 0; j < c; j++) {
                if (index < linMat.size()) {
                    instMat.push_back(linMat.at(index));
                    index++;
                }
            }
            reshapMat.push_back(instMat);
        }
        return reshapMat;
    }
};