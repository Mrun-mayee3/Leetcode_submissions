class Solution {
public:
    int search(vector<int>& nums, int target) {
        //int left = 0, right = n - 1;
        //int n = nums.size();
//
        //while(left <= right){
        //    int mid = left + (right-1) / 2;
        //    if(target == nums[mid])
        //        return mid;
        //    else if(target > nums[mid])
        //        left = mid + 1;
        //    else{
        //        right = mid - 1;
        //    }
        //}
        //return -1;


        ///////////////////// Using recursion ///////////////////

        int l = 0, r = nums.size()-1;
        
        return fun(nums, target, l, r);
    }

    int fun(vector<int> & nums, int target, int l, int r){
        int mid = l + (r - l) / 2;
        if(l > r) return -1;

        if(nums[mid] == target) return mid;

        else if (nums[mid] > target) return fun(nums, target, l, mid-1);
        else return fun(nums, target, mid+1, r);
    }
};