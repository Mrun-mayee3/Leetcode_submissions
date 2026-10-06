class Solution {
public:
    vector<vector<string> > partition(string s) {
        vector<string> temp;
        vector<vector<string>> ans;
        int idx = 0;
        solve(ans, temp, idx, s);
        return ans;
    }
    void solve(vector<vector<string>> &ans, vector<string> &temp, int idx, string s){
        if(idx == s.size()){
            ans.push_back(temp);
            return;
        }
        for(int i = idx; i < s.size(); i++){
            if(isPalin(s, idx, i)){
                temp.push_back(s.substr(idx, i-idx+1));
                solve(ans, temp, i+1, s);
                temp.pop_back();
            }
        }
    }

    bool isPalin(string s, int start, int end){
        while(start <= end ){
            if(s[start++] != s[end--])
                return false;    
        }
        return true;
    }
};