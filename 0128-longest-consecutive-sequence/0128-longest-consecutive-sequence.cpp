class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        int maxcnt = 1;
        if(nums.size() == 0) return 0;
        for (int num : nums) {
            st.insert(num);
        }

        for (auto it : st) {
            if (st.find(it - 1) == st.end()) {
                // prev item is in the set
                int cnt = 1;
                int x = it;
                while (st.find(x + 1) != st.end()) {
                    x = x + 1;
                    cnt = cnt + 1;
                }
                maxcnt = max(maxcnt, cnt);
            }
        }
        return maxcnt;
    }
};