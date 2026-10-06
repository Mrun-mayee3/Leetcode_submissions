class Solution {
public:
    int scoreOfParentheses(string s) {
        int score = 0;
        vector<int> ans;

        for(int i = 0; i < s.length(); i++){
            // for curr i is (
            if(s[i] == '('){
                ans.push_back(score);
                score = 0;
            }
            else{ // curr i is )
                if(s[i-1] == '('){
                    score = ans.back() + 1;
                }
                else{
                    score = ans.back() + 2 * score;
                }
                ans.pop_back();
            }
        }
        return score;
    }
};