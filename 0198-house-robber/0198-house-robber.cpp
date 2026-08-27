class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        int max_sum = 0;
        if(n == 1) return nums[0];
        
        vector<int> v(n);
        v[0] = nums[0]; // v[i-2]
        v[1] = max(nums[0], nums[1]); // v[i-1]
        
        for(int i = 2; i < n; i++){  
            v[i] = max(nums[i] + v[i-2], v[i-1]);
        }
        return v[n-1];
    }
};