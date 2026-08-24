class Solution {
public:
    int uniquePaths(int m, int n) {
         vector<vector<int>> ans(m, vector<int>(n, 0));
         return ways(m-1, n-1, ans);

    }
    int ways(int row, int col, vector<vector<int>>& ans){
        if(row == 0 || col == 0){
            return 1;
        }
        if(ans[row][col] != 0){
            return ans[row][col];
        }
        ans[row][col] = ways(row - 1, col, ans)+ ways(row, col-1, ans);
        return ans[row][col];
    }
};