class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l = 0;
        int max_cnt = 0;
        int cnt = 0;
        int n = fruits.size();
        unordered_map<int,int> mp;

        for(int r = 0; r < n; r++){
            mp[fruits[r]]++;
            while(mp.size() > 2){
                mp[fruits[l]]--;
                if(mp[fruits[l]] == 0){
                    mp.erase(fruits[l]);
                }
                l++;
            }
            max_cnt = max(r-l+1, max_cnt);
        }
        return max_cnt;
        //return windoe ki size
    }
};