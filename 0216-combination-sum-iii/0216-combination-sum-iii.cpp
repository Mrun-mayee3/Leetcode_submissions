class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<int> arr = {1,2,3,4,5,6,7,8,9};
        int cnt = 0;
        int sum = 0;
        int idx = 0;
        solve(k, n, arr, temp, cnt, sum, idx, ans);
        return ans;
    }

    void solve(int k, int n, vector<int>& arr, vector<int>& temp, int cnt, int sum, int idx, vector<vector<int>>& ans){
        
        if(cnt == k ){
            if(sum == n)
                ans.push_back(temp);
            return;
        }

        for(int i = idx; i < arr.size(); i++){
            
            if(sum + arr[i] > n)
                break;
           
            
            temp.push_back(arr[i]);
            solve(k, n, arr, temp, cnt+1, sum + arr[i], i+1, ans);
            temp.pop_back();
            
        }
    }
};