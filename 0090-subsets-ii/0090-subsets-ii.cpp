class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int idx = 0;
        vector<int> temp;
        helper(nums, idx, ans, temp);

        return ans;
    }
    
    void helper(vector<int>& nums, int idx, vector<vector<int>> &ans, vector<int>& temp){
        ans.push_back(temp);
       

        for(int i = idx; i < nums.size(); i++){
        if(i > idx && nums[i] == nums[i-1])
            continue;

        temp.push_back(nums[i]);
        helper(nums,i + 1, ans, temp);
        temp.pop_back();
        }
        
    }
};