class Solution {
public:
    vector<int> psee(vector<int>& arr){
        stack<int> st;
        vector<int> psee_ans(arr.size(), -1);
        
        for(int i = 0; i < arr.size(); i++){
            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }
            (!st.empty()) ? psee_ans[i] = st.top() : psee_ans[i] = -1;
            st.push(i);
        }
        return psee_ans;
    }

    vector<int> nse(vector<int>& arr){
        vector<int> nse_ans(arr.size(), -1);
        stack<int> st;
        for(int i = arr.size()-1; i >= 0 ; i--){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            if(st.empty()){
                nse_ans[i] = arr.size();
            }
            else{
                nse_ans[i] = st.top();
            }
            st.push(i);
        }
        return nse_ans;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int mod = (int) 1e9 + 7;
        int sum = 0;

        vector<int> i_nse = nse(arr);
        vector<int> i_psee= psee(arr);

        for(int i = 0; i < arr.size(); i++){
            // this will give you index of previous smaller element
            long long left = i - i_psee[i];
            // this will give you index of next smaller element
            long long right = i_nse[i] - i;    
            sum = (sum + (1LL * left * right * arr[i])) % mod;
        }
        return sum;
    }
};