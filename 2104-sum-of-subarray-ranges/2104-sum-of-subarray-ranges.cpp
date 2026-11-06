class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum = 0;
        int n = nums.size();
        
        for(long long i = 0; i < n; i++){
            long long mini = nums[i];
            long long maxi = nums[i];

            for(int j = i; j < n; j++){
                mini = min(mini, (long long)nums[j]);
                maxi= max(maxi, (long long)nums[j]);
                
                long long range = maxi - mini;
                sum += range;
            }
        }
        return sum;
    }
};