class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0, high = nums.size()-1;
       
        while (low < high){
        //int mid = low + (high - low) / 2;
        int mid = low + (high - low + 1) / 2;
            //if(nums[mid] > nums[mid+1]){
            //    high = mid;
            //}
            //else{
            //    low = mid+1;
            //}

            if(nums[mid] > nums[mid-1]){
                low =mid;
            }
            else{
                high = mid-1;
            }
        }
        return low;
    }
};