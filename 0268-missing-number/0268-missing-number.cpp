class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // most optimized solution 
        int xor1 = 0;
        int xor2 = 0;
        int n = nums.size();
        for(int i = 0; i < nums.size(); i++){
            xor1 = xor1 ^ nums[i];
            xor2 = xor2 ^ i;
        }
        xor2 = xor2 ^ n;
        return xor1 ^ xor2;
    }
};