class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        
        for(int num : nums){
            mp[num]++;
        }

        for (int i = 1; i <= 101; i++){
            int mul = i * k;
            auto it = mp.find(mul);
            if(it == mp.end()){
                return mul;
            } 
        }
        return -1;
    }
};