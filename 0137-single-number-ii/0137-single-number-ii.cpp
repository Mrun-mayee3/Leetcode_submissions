class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<long long, int> mp;

        for(auto num : nums){
            mp[num]++;
        }
        for(auto num : nums){
            if(mp[num] == 1) return num;
        }
        return -1;
    }
};