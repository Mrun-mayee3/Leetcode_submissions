class Solution {
public:
    void solve(int n, vector<int>& candidates, int target, int idx, vector<vector<int>>& ans, vector<int>& temp){
        if (target == 0){
            ans.push_back(temp);
            return;
        }   
        
        for(int i = idx; i < candidates.size(); i++){
            // To avoid duplicates
            if (i > idx && candidates[i] == candidates[i - 1])
                continue;
            if(candidates[i] > target)
                break;
            temp.push_back(candidates[i]);
            solve(n, candidates, target- candidates[i], i + 1, ans, temp);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n = candidates.size();
        int idx = 0;
        sort(candidates.begin(), candidates.end());
        solve(n, candidates, target, idx, ans, temp);
        return ans;
    }
};