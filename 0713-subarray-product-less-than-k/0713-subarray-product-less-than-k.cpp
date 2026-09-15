class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l = 0;
        int count = 0;
        int product = 1;

        if(k <= 1)
            return 0;
        
        for(int r = 0; r < nums.size(); r++){
            product *= nums[r];
            while(product >= k){
                product /= nums[l];
                l++;
            }
            count += r - l + 1;
        }
        return count;
    }
};