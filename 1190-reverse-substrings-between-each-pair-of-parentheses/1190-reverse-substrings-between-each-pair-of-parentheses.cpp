class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;

        for(char ch : s){
            string temp;
            if(ch == '(' || isalpha(ch)){
                st.push(ch);
            }
            else{
                while(st.top() != '('){
                    temp += st.top();
                    st.pop();
                }
                // now stack of top is '('
                st.pop();

                for(char c : temp){
                    st.push(c);
                }
            }
        }
        string ans;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};