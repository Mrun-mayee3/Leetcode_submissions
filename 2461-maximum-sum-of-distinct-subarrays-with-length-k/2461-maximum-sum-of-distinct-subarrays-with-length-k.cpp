class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum = 0;
        int l = 0;
        long long max_sum = 0;
        unordered_map<int, int> mp;

        for(int i = 0; i < k; i++){
            sum += nums[i]; 
            mp[nums[i]]++;
        }
        // Check if first window has distinct elements
        if(mp.size() == k) {
            max_sum = sum;
        }
        
        for(int r = k; r < nums.size(); r++){
            
                sum = sum + 1LL*nums[r] - 1LL*nums[r-k];
                mp[nums[r]]++;
                mp[nums[l]]--;

                if(mp[nums[l]]== 0)
                    mp.erase(nums[l]);
                l++;
                
                if(mp.size() == k)
                    max_sum = max(sum, max_sum);
            
        }
        return max_sum;
    }
};