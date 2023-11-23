class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> instHeights;
        for(auto c: heights) instHeights.push_back(c);
        quickSort(instHeights,0, instHeights.size() - 1);
        int count = 0;
        for(int i = 0; i<instHeights.size(); i++){
            if(instHeights.at(i) != heights.at(i)) count++;
        }
        return count;
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
};