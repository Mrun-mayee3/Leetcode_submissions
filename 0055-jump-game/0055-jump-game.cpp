class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxLeap = 0;
        for(int i = 0; i < n; i++){
            if(maxLeap < i)
                return false;
            maxLeap = max(maxLeap, nums[i]+i);
        }
        return true;
    }
};