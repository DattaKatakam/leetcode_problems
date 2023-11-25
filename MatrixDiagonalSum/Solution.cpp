class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int matSize = mat.size(), lDiagSum = 0, rDiagSum = 0;
        if(matSize%2 != 0){
            for(int i = 0, j = 0; i< matSize && j < matSize; i++, j++){
                if(i == j) lDiagSum+=mat.at(i).at(j);
            }
            for(int i = 0, j = matSize-1; i< matSize && j >= 0; i++, j--){
                rDiagSum+=mat.at(i).at(j);
            }
            return (rDiagSum + lDiagSum - mat.at(matSize/2).at(matSize/2)); 
        }
        else{
            for(int i = 0, j = 0; i< matSize && j < matSize; i++, j++){
                if(i == j) lDiagSum+=mat.at(i).at(j);
            }
            for(int i = 0, j = matSize-1; i< matSize && j >= 0; i++, j--){
                rDiagSum+=mat.at(i).at(j);
            }
            return (lDiagSum + rDiagSum);
        }
    }
};