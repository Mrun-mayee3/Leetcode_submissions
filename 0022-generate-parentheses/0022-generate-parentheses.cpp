class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;

        helper(n, 0, 0, ans, temp);
        return ans;
    }
    void helper(int n, int l, int r, vector<string> &ans,
        string &temp){
        if(l + r == 2 * n) {
            ans.push_back(temp);
            return; 
        }

        // increase l and r untill they become n
        if(l < n){
            // l++ in the call
            temp.push_back('(');
            helper(n, l + 1, r, ans, temp);
            // need to backtrack bcoz sharing same copy to every call
            temp.pop_back();
        }

        if(r < l){
            temp.push_back(')');
            helper(n, l, r + 1, ans, temp);
            temp.pop_back();
        }
    }
};