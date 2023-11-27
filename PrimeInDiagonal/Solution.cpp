class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        vector<int> diaVals = getDiagVals(nums), primeVals;
        for(auto a: diaVals){
            if(isPrime(a)) primeVals.push_back(a);
        }
        if(!primeVals.empty()){
            quickSort(primeVals, 0, primeVals.size()-1);
            return primeVals.back();
        }
        else return 0;
    }
    
    void quickSort(std::vector<int>& arr, int low, int high) {
        if (low < high) {
            int pivotIndex = partition(arr, low, high);
            quickSort(arr, low, pivotIndex - 1);
            quickSort(arr, pivotIndex + 1, high);
        }
    }

    int partition(std::vector<int>& arr, int low, int high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; ++j) {
            if (arr[j] <= pivot) {
                i++;
                std::swap(arr[i], arr[j]);
            }
        }

        std::swap(arr[i + 1], arr[high]);
        return i + 1;
    }
    
    bool isPrime(int number) {
        if (number <= 1) {
            return false;
        }
        for (int i = 2; i <= sqrt(number); ++i) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }

    vector<int> getDiagVals(vector<vector<int>>& mat){
        int matSize = mat.size(), lDiagSum = 0, rDiagSum = 0;
        vector<int> diagVal;
        if(matSize%2 != 0){
            for(int i = 0, j = 0; i< matSize && j < matSize; i++, j++){
                if(i == j) diagVal.push_back(mat.at(i).at(j));
            }
            for(int i = 0, j = matSize-1; i< matSize && j >= 0; i++, j--){
                diagVal.push_back(mat.at(i).at(j));
            }
            return diagVal; 
        }
        else{
            for(int i = 0, j = 0; i< matSize && j < matSize; i++, j++){
                if(i == j) diagVal.push_back(mat.at(i).at(j));
            }
            for(int i = 0, j = matSize-1; i< matSize && j >= 0; i++, j--){
                diagVal.push_back(mat.at(i).at(j));
            }
            return diagVal;
        }
    }
};