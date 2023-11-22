class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sqSortedList;
        for(auto a: nums){
            sqSortedList.push_back(pow(a,2));
        }
        quickSort(sqSortedList,0, sqSortedList.size() - 1);
        return sqSortedList;
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