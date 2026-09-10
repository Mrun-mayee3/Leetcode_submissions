class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        unordered_map<int, int> mp;

        for(int x : nums){
            mp[x]++;
            if(mp[x] > 1){
                v.push_back(x);
            }
        }
        return v;
    }
};