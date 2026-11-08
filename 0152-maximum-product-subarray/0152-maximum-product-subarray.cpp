class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_prod = INT_MIN;
        int n = nums.size();
        int prefix = 1;
        int suffix = 1;

        for(int i = 0; i < n; i++){
            if(prefix == 0) prefix = 1;
            if(suffix == 0) suffix = 1;
            
            prefix = prefix * nums[i];
            suffix = suffix * nums[n-1-i];

            max_prod = max(max_prod, (max(prefix, suffix)));
        }
        return max_prod;
    }
};