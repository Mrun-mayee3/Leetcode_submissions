class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int cnt = 0;
        int n = arr.size();
        int mod = 1e9+7;
        vector<int> prefix(n,0);
        prefix[0] = arr[0];

        for(int i = 1; i < n; i++){
            prefix[i] = prefix[i-1] + arr[i];
        }

        int odd = 0, even = 1;

        for(int i = 0; i < n; i++){
            if(prefix[i] % 2 == 0){
                //case odd + even = odd
                cnt = (cnt + odd) % mod;
                even++;
            }
            else{
                //case even + odd = odd
                cnt = (cnt + even) % mod;
                odd++;
            }
        }
        return cnt;
    }
};