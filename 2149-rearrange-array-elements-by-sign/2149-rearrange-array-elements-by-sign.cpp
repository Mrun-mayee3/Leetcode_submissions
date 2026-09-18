class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int positive = 0, negative = 1;
        vector<int> ans(nums.size(), 0);

        for (int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                // it is positive, replace it at its corresponding location
                ans[positive] = nums[i];
                positive += 2;
            }
            else{
                // it is negative
                ans[negative] = nums[i];
                negative += 2;
            }
        }
        return ans;
    }
};