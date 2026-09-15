class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return fun(nums, k) - fun(nums, k-1);
    }

    int fun(vector<int>& nums, int k){
        int l = 0, count = 0;
        unordered_map<int, int> mp;
        int n = nums.size();
        for(int r = 0; r < n; r++){
            mp[nums[r]]++;

            while(mp.size() > k){
                mp[nums[l]]--;
                //when frequency is zero remove it from map
                if(mp[nums[l]] == 0){
                    mp.erase(nums[l]);
                }
                l++;
            }
            count += r - l + 1;
        }
        return count;
    }
};