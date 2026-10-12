class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        // Brute force is hashing obviously
        
        // Optimized is using bit magic

        long long xored = 0;
        for(int i = 0; i < nums.size(); i++){
            xored = xored ^ nums[i];
        }
        long long rightmost = xored & -xored;
        int b1 = 0, b2 = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] & rightmost)
                b1 = b1 ^ nums[i];
            else
                b2 = b2 ^ nums[i];
        }
        return {b1, b2};
    }
};