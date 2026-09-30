class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n = candidates.size();
        int idx = 0;
        solve(n, candidates, target, idx, ans, temp);
        return ans;
    }

    void solve(int n, vector<int>& candidates, int target, int idx,
               vector<vector<int>>& ans, vector<int>& temp) {
        // base case
        // idx n jitna ho jaye tab and
        if (idx == n) {
            if (target == 0) {
                ans.push_back(temp);
            }
            return;
        }

        if (candidates[idx] <= target) {
            // curr idex target se jyada hua
            //  for taken = left branch
            // index ko as it is rakhna he
            // curr idx target se minus
            temp.push_back(candidates[idx]);
            solve(n, candidates, target - candidates[idx], idx, ans, temp);
            // curr idx temp me add
            temp.pop_back();
        }

        // not taken = right branch
        // index ko age badhana he
        solve(n, candidates, target, idx + 1, ans, temp);
    }
};