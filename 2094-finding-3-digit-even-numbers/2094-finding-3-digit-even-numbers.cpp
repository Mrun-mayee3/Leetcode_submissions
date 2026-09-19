class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n = digits.size();
        set<int> st;
        vector<int> ans;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                for(int k =0; k < n; k++){
                    // to skip duplicates
                    if(i == j || j == k || i == k)
                        continue;
                    int num = digits[i]*100 + digits[j]*10 + digits[k];

                    // to handle 0 not at 100's place case
                    if(num > 99 && num % 2 != 1) 
                        st.insert(num);
                }
            }
        }
        for(int x: st){
            ans.push_back(x);
        }
        return ans;
    }
};