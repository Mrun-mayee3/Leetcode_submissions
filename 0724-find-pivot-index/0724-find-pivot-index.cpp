class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // --------------------- Brute force
        //int n = nums.size();
        //for(int i = 0; i < n; i++){
        //    int l = 0, r = n-1;
        //    int rsum =0 , lsum =0;    
//
        //    while(l < i){
        //        lsum += nums[l];
        //        l++;
        //    }
        //    while(r > i){
        //        rsum += nums[r];
        //        r--;
        //    }
        //    if(lsum == rsum)
        //        return i;
        //}
        //return -1;

        int total = 0;
        for(int i = 0; i < nums.size(); i++){
            total += nums[i];
        }

        int lsum = 0;
        for(int i = 0; i < nums.size(); i++){
            int rsum = total - lsum - nums[i];
            if(rsum == lsum) return i;
            lsum += nums[i];
        }
        return -1;
    }
};