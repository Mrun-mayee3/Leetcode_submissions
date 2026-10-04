class Solution {
public:
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        vector<string> ans;
        string temp = "";
        unordered_map<char, string> mp;
       
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";

        solve(digits, n, mp, ans, temp, 0);
        return ans;
    }

    void solve(string digits, int n, unordered_map<char, string> mp,
               vector<string>& ans, string& temp, int idx) {
        if (temp.size() == n) {
            ans.push_back(temp);
            return;
        }

        string str = mp[digits[idx]];

        for (int i = 0; i < str.length(); i++) {
            temp.push_back(str[i]);
            solve(digits, n, mp, ans, temp, idx + 1);
            temp.pop_back();
        }
    }
};