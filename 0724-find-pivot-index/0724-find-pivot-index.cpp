class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
         
        
        for(int i = 0; i < n; i++){
            int l = 0, r = n-1;
            int rsum =0 , lsum =0;    

            while(l < i){
                lsum += nums[l];
                l++;
            }
            while(r > i){
                rsum += nums[r];
                r--;
            }
            if(lsum == rsum)
                return i;
        }
        return -1;
    }
};