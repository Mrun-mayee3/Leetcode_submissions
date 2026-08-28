class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> v;
        
        for(int i = 1; i <= n / i; i++){
            if(n % i == 0){
                v.push_back(i);
                
                if(i != n / i){
                    v.push_back(n / i);
                }
            }
        }
        sort(v.begin(), v.end());
        
        for(int i = 0; i < v.size(); i++){
            if(i == k-1)
                return v[i];
            }
        return -1;
    }
};