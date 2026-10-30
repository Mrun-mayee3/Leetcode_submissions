class Solution {
public:
    string removeKdigits(string nums, int k) {
        stack<char> st;
        
        for(int i = 0; i < nums.size(); i++){
            while(!st.empty() && (st.top()) > (nums[i]) && k != 0){
                st.pop();
                k--;
            }
            st.push(nums[i]);
        }
        // if no item gets removed from stack i.e stack is full and k is original
        while(k > 0 && !st.empty()){
            st.pop();
            k--;
        }

        // If removing k digits deletes all digits, return "0".
        if(st.empty()){
            return "0";
        }
        
        string ans = "";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());

        for(int i = 0; i < ans.size(); i++){
            if(ans[i] != '0'){
                string s = ans.substr(i);
                return s;
            }
        }      
        return "0";
    }
};