class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        int idx = 0;
        vector<int> temp;

        helper(nums, n, idx, temp, ans);
        return ans;
    }
    void helper(vector<int> &nums,int n, int idx, vector<int> &temp, vector<vector<int>> &ans){
        if(idx == n){
            ans.push_back(temp);
            return;
        }

        // make subarrays
        // for taken
        temp.push_back(nums[idx]);
        helper(nums, n, idx + 1,temp, ans);

        temp.pop_back();
        // for not taken
        helper(nums, n, idx+1, temp, ans);
    }
};