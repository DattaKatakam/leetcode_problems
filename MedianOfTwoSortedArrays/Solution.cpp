class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> mergedList;
        int i=0, j=0;
        int lengthListIndex = nums1.size() + nums2.size() -1;
        while(lengthListIndex >= 0){
            if( i < nums1.size() && j < nums2.size() ){
                if(nums1.at(i) < nums2.at(j)){
                    mergedList.push_back(nums1.at(i));
                    i++;
                }
                else{
                    mergedList.push_back(nums2.at(j));
                    j++;
                }

            }
            else if(i < nums1.size() && j >= nums2.size()){
                mergedList.push_back(nums1.at(i));
                i++;
            }
            else if(i >= nums1.size() && j < nums2.size()){
                mergedList.push_back(nums2.at(j));
                j++;
            }
            lengthListIndex--;
        }
        int medianIndex = (nums1.size() + nums2.size()) / 2;
        int sizeList = nums1.size() + nums2.size();
        double median;
        // if(nums1.size() + nums2.size() <=2 && medianIndex >0){
        //     if(medianIndex == 0) return
        // }
        if(medianIndex>0 && !mergedList.empty()){
            if( sizeList <= 2){
                if(sizeList == 1){
                    median = mergedList.at(0);
                }
                else median = (mergedList.at(0) + mergedList.at(1) ) / 2.0; 
            }

            else if(sizeList % 2 == 0){
                median = (mergedList.at(medianIndex) + mergedList.at(medianIndex - 1) ) / 2.0; 
            }
            else{
                median = mergedList.at(medianIndex);
            }
        }
        else median = mergedList.at(0);

        return median;
    }
};